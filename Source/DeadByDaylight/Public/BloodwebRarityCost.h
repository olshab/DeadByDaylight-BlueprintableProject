#pragma once

#include "CoreMinimal.h"
#include "BloodwebRarityCost.generated.h"

USTRUCT(BlueprintType)
struct FBloodwebRarityCost
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Artifact;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Common;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Legendary;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Rare;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SpecialEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Spectral;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Teachable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 UltraRare;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Uncommon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 VeryRare;

public:
	DEADBYDAYLIGHT_API FBloodwebRarityCost();
};

FORCEINLINE uint32 GetTypeHash(const FBloodwebRarityCost) { return 0; }
