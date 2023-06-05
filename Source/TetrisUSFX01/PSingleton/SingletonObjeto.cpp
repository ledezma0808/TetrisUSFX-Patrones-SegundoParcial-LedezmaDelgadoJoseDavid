// Fill out your copyright notice in the Description page of Project Settings.


#include "SingletonObjeto.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ASingletonObjeto::ASingletonObjeto()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


    //Search for existing Instances of this class
    TArray<AActor*> contenedor; //contenedor


    UGameplayStatics::GetAllActorsOfClass(GetWorld(),ASingletonObjeto::StaticClass(), contenedor);
    if (contenedor.Num() > 1)
    {
        //If exist at least one of them, set the instance with the first found one
        Instancia = Cast<ASingletonObjeto>(contenedor[0]);
        GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("%s ya existe"), *Instancia->GetName()));
        //Then Destroy this Actor
        Destroy();
    }
    else
    {

		MeshObjeto = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Objeto"));
		RootComponent = MeshObjeto;

		static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshObjetoAsset(TEXT("StaticMesh'/Game/Mesh/Cylinder.Cylinder'"));

		if (MeshObjetoAsset.Succeeded())
		{
			MeshObjeto->SetStaticMesh(MeshObjetoAsset.Object);
			MeshObjeto->SetRelativeLocation(FVector(0.0f, -180.0f, 100.0f));
			MeshObjeto->SetWorldScale3D(FVector(0.1f, 0.1f, 0.2f));
			MeshObjeto->SetRelativeRotation(FRotator(45.0f, 0.0f, 0.0f));
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("No existe la malla para Objeto"));
		}
	}
}

// Called when the game starts or when spawned
void ASingletonObjeto::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASingletonObjeto::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

