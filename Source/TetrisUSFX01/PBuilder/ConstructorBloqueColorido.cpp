// Fill out your copyright notice in the Description page of Project Settings.


#include "ConstructorBloqueColorido.h"

#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInterface.h" 

void AConstructorBloqueColorido::BeginPlay()
{
	// Spawn the Lodging Actors
	BloqueGeneral = GetWorld()->SpawnActor<ABloqueGeneral>(ABloqueGeneral::StaticClass());
	//Attach it to the Builder (this)
	BloqueGeneral->AttachToActor(this, FAttachmentTransformRules::KeepRelativeTransform);
	UStaticMeshComponent* MeshComponent = Cast<UStaticMeshComponent>(GetComponentByClass(UStaticMeshComponent::StaticClass()));
	MaterialColorido = Cast<UMaterial>(StaticLoadObject(UMaterial::StaticClass(), nullptr, TEXT("Material'/Game/Mesh/Material_2.Material_2''")));
}

void AConstructorBloqueColorido::ContruirTamanoBloque()
{
	//Set the Swimming Pool of the Lodging
	BloqueGeneral->SetTamanoBloque("El tamaño del bloque explosivo");

}

void AConstructorBloqueColorido::ConstruirColorBloque()
{
	BloqueGeneral->SetColorBloque("El color del bloque explosivo");

}

void AConstructorBloqueColorido::ConstruirMaterial()
{

	MeshBloqueGeneral->SetMaterial(1, MaterialColorido);
	MeshBloqueGeneral->SetMaterial(0, MaterialColorido);


	BloqueGeneral->SetMaterial("El Material del bloque explosivo");

	FString NombreMaterial = MaterialColorido->GetName();
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Yellow, FString::Printf(TEXT("El material es %s"), *NombreMaterial));



}

ABloqueGeneral* AConstructorBloqueColorido::GetBloqueGeneral()
{
	return BloqueGeneral;
}
