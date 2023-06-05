// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SingletonObjeto.generated.h"

UCLASS()
class TETRISUSFX01_API ASingletonObjeto : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASingletonObjeto();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY()
		ASingletonObjeto* Instancia;
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* MeshObjeto;

};
