#pragma once

#include "CoreMinimal.h"
#include "EBarrelType.h"
#include "BarrelCharmInfo.generated.h"

USTRUCT(BlueprintType)
struct FBarrelCharmInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EBarrelType BarrelType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString RewardId;

public:
	BARREL2023_API FBarrelCharmInfo();
};

FORCEINLINE uint32 GetTypeHash(const FBarrelCharmInfo) { return 0; }
