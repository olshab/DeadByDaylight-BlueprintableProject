#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EVoidEnergyType.h"
#include "OrbProperties.generated.h"

class ADBDPlayer;

USTRUCT(BlueprintType)
struct FOrbProperties
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EVoidEnergyType VoidEnergyType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector SpawnLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector HoverLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector CustomEndLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CustomTravelTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<ADBDPlayer*> ExtraPlayersToObserveOrbs;

public:
	HALLOWEEN2022_API FOrbProperties();
};

FORCEINLINE uint32 GetTypeHash(const FOrbProperties) { return 0; }
