// Fill out your copyright notice in the Description page of Project Settings.

#include "TunnelRacer.h"
#include "ShipBase.h"


// Sets default values
AShipBase::AShipBase()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_Box = CreateDefaultSubobject<UBoxComponent>(TEXT("RootBox"));
	RootComponent = m_Box;

	m_Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RootStaticMesh"));

	m_Thruster1 = CreateDefaultSubobject<USceneComponent>(TEXT("Thruster1"));
	m_Thruster2 = CreateDefaultSubobject<USceneComponent>(TEXT("Thruster2"));
	m_Thruster3 = CreateDefaultSubobject<USceneComponent>(TEXT("Thruster3"));
	m_Thruster4 = CreateDefaultSubobject<USceneComponent>(TEXT("Thruster4"));
}

// Called when the game starts or when spawned
void AShipBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AShipBase::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void AShipBase::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

