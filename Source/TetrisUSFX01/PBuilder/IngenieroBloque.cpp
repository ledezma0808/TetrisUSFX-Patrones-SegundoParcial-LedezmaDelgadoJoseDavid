// Fill out your copyright notice in the Description page of Project Settings.


#include "IngenieroBloque.h"

// Sets default values
AIngenieroBloque::AIngenieroBloque()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AIngenieroBloque::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AIngenieroBloque::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}




void AIngenieroBloque::ConstruirBloque()
{
	//Creates the buildings
	ConstructorBloque->ContruirTamanoBloque();
	ConstructorBloque->ConstruirColorBloque();
	ConstructorBloque->ConstruirMaterial();


}

void AIngenieroBloque::SetConstructorBloque(AActor* Constructor)
{
	ConstructorBloque = Cast<IConstructorBloque>(Constructor);
}

ABloqueGeneral* AIngenieroBloque::GetBloqueGeneral()
{
	if (ConstructorBloque)
	{
		//Returns the Lodging of the Builder
		return ConstructorBloque->GetBloqueGeneral();
	}
	else return nullptr;

}
