// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "kismet/GameplayStatics.h"

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Piece.h"

#include "PState/Escenario.h"

#include "PBuilder/ConstructorBloqueColorido.h"
#include "PBuilder/ConstructorBloqueFuego.h"
#include "PBuilder/ConstructorBloqueHielo.h"
#include "PBuilder/IngenieroBloque.h"

#include "Board.generated.h"

UCLASS()
class TETRISUSFX01_API ABoard : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABoard();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY()
	APiece* CurrentPiece;

	void Rotate(); 
	void MoveLeft(); 
	void MoveRight();
	void MoveDown(); 
	void NewPiece();
	void CheckLine();
	void MoveDownToEnd();
	//Builder
	int contador;
	void Builder();
	UPROPERTY(VisibleAnywhere, Category = "Main")
		class AConstructorBloqueFuego* BloqueFuego;
	class AConstructorBloqueColorido* BloqueColorido;
	class AConstructorBloqueHielo* BloqueHielo;
	class AIngenieroBloque* Ingeniero;
	FVector Vector;
	float Py ;
	float Pz ;
	//State
	UPROPERTY()
		AEscenario* Escenario;

	UPROPERTY()
		AEscenario* Escen;
private:
	enum PieceStatus { PS_NOT_INITED, PS_MOVING, PS_GOT_BOTTOM };
	PieceStatus Status = PS_NOT_INITED;

	const float CoolDown = 0.5f;
	float CoolLeft = 0.5f;
	bool bGameOver = false;

	bool CheckGameOver();

};
