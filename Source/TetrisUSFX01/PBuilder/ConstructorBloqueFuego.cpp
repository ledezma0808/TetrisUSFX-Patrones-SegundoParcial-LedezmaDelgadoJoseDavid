// Fill out your copyright notice in the Description page of Project Settings.


#include "ConstructorBloqueFuego.h"
#include "Components/StaticMeshComponent.h"
#include "BloqueGeneral.h"
#include "Materials/MaterialInterface.h"


void AConstructorBloqueFuego::BeginPlay()
{


	// Spawn the Lodging Actors
	BloqueGeneral = GetWorld()->SpawnActor<ABloqueGeneral>(ABloqueGeneral::StaticClass());
	//Attach it to the Builder (this)
	BloqueGeneral->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
	UStaticMeshComponent* MeshComponent = Cast<UStaticMeshComponent>(GetComponentByClass(UStaticMeshComponent::StaticClass()));
	Material1 = Cast<UMaterial>(StaticLoadObject(UMaterial::StaticClass(), nullptr, TEXT("Material'/Game/Mesh/Material_6.Material_6'")));


}

void AConstructorBloqueFuego::ContruirTamanoBloque()
{
	//Set the Swimming Pool of the Lodging
	BloqueGeneral->SetTamanoBloque("El tamaño del bloque explosivo");

}

void AConstructorBloqueFuego::ConstruirColorBloque()
{
	BloqueGeneral->SetColorBloque("El color del bloque explosivo");

}

void AConstructorBloqueFuego::ConstruirMaterial()
{

	MeshBloqueGeneral->SetMaterial(1, Material1);


	BloqueGeneral->SetMaterial("El Material del bloque explosivo");

	FString NombreMaterial = Material1->GetName();
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El material es %s"), *NombreMaterial));



}

ABloqueGeneral* AConstructorBloqueFuego::GetBloqueGeneral()
{
	return BloqueGeneral;
}
