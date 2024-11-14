// Copyright Epic Games, Inc. All Rights Reserved.

#include "ObserverPatternGameMode.h"
#include "ObserverPatternCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "VidasEnemigoObserver.h"
#include "Enemigo.h"

AObserverPatternGameMode::AObserverPatternGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void AObserverPatternGameMode::BeginPlay()
{
	Super::BeginPlay();

	observer = GetWorld()->SpawnActor<AVidasEnemigoObserver>(AVidasEnemigoObserver::StaticClass());
	enemigo = GetWorld()->SpawnActor<AEnemigo>(AEnemigo::StaticClass(), FVector(1160.0f, 300.0f, 150.0f), FRotator::ZeroRotator);
	enemigo = GetWorld()->SpawnActor<AEnemigo>(AEnemigo::StaticClass(), FVector(1160.0f, -300.0f, 350.0f), FRotator::ZeroRotator);
	enemigo = GetWorld()->SpawnActor<AEnemigo>(AEnemigo::StaticClass(), FVector(1160.0f, 500.0f, 400.0f), FRotator::ZeroRotator);

	enemigo->EstablecerObserver(observer);
	observer->EstablecerAccion("Quitavida");
	observer->EstablecerAccion("QuitaVida");
	observer->EstablecerAccion("QuitaVida");

}

void AObserverPatternGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


