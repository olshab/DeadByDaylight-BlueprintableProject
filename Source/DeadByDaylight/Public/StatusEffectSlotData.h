#pragma once

#include "CoreMinimal.h"
#include "EStatusEffectType.h"
#include "StatusEffectSlotData.generated.h"

USTRUCT(BlueprintType)
struct FStatusEffectSlotData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString Id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString IconFilePath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EStatusEffectType StatusEffectType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 Level;

public:
	DEADBYDAYLIGHT_API FStatusEffectSlotData();
};

FORCEINLINE uint32 GetTypeHash(const FStatusEffectSlotData) { return 0; }
