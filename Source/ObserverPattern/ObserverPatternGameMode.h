// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ObserverPatternGameMode.generated.h"

UCLASS(minimalapi)
class AObserverPatternGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AObserverPatternGameMode();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	class AVidasEnemigoObserver* observer;
	class AEnemigo* enemigo;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};



