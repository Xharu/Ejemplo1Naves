// Copyright Epic Games, Inc. All Rights Reserved.

#include "Ejemplo1NavesGameMode.h"
#include "Ejemplo1NavesPawn.h"
#include "Shapes.h"

AEjemplo1NavesGameMode::AEjemplo1NavesGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AEjemplo1NavesPawn::StaticClass();

}

void AEjemplo1NavesGameMode::BeginPlay()
{
    Super::BeginPlay();

    // Create a new shape
    FVector ShapesPosition = FVector(-990.0f, -120.0f, 360.0f);
    AShapes* NewShape = GetWorld()->SpawnActor<AShapes>(AShapes::StaticClass(), ShapesPosition, FRotator(0, 0, 0));
}

void AEjemplo1NavesGameMode::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

