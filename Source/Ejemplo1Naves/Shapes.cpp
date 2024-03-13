// Fill out your copyright notice in the Description page of Project Settings.


#include "Shapes.h"

// Sets default values
AShapes::AShapes()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	// Create the mesh component
	mallaShapes = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	mallaShapes->SetStaticMesh(malla.Object);
    mallaShapes->SetSimulatePhysics(true);
    mallaShapes->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	mallaShapes->SetupAttachment(RootComponent);

	RootComponent = mallaShapes;
    Velocity = 04.0f;
}

// Called when the game starts or when spawned
void AShapes::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AShapes::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

    FVector TargetLocation = FVector(-990.0f, -120.0f, 160.0f);
    FVector Direction = TargetLocation - FVector(-970.0f, -120.0f, 160.0f);
    float DistanceToTarget = FVector::Dist(TargetLocation, FVector(-970.0f, -120.0f, 160.0f));
    float DeltaMove = Velocity * GetWorld()->DeltaTimeSeconds;

    if (DeltaMove > DistanceToTarget)
    {
        // Si el desplazamiento excede la distancia al objetivo, mueve directamente al objetivo
        this->SetActorLocation(TargetLocation);
    }
    else
    {
        // Mueve el objeto en la dirección calculada
        this->AddActorWorldOffset(Direction * DeltaMove);
    }
}

