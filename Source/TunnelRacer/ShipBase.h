// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Pawn.h"
#include "ShipBase.generated.h"

UCLASS()
class TUNNELRACER_API AShipBase : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AShipBase();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Ship)
	UBoxComponent* m_Box;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Ship)
	UStaticMeshComponent* m_Mesh; 

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Ship)
	//	int m_ThrusterCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Ship)
	USceneComponent* m_Thruster1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Ship)
	USceneComponent* m_Thruster2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Ship)
	USceneComponent* m_Thruster3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Ship)
	USceneComponent* m_Thruster4;

private:
	TArray<USceneComponent*> m_Thrusters;
};
