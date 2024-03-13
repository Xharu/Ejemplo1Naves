// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Ejemplo1NavesGameMode.generated.h"

class AShapes;

UCLASS(MinimalAPI)
class AEjemplo1NavesGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AEjemplo1NavesGameMode();

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
};



