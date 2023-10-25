#pragma once

#include "CoreMinimal.h"
#include "EStatusEffectType.h"
#include "StatusEffectInitializationData.generated.h"

class ADBDPlayer;
class UGameplayModifierContainer;

USTRUCT(BlueprintType)
struct FStatusEffectInitializationData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ADBDPlayer* OriginatingPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool HasOriginatingPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UGameplayModifierContainer* OriginatingEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool HasOriginatingEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EStatusEffectType StatusEffectType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CustomParam;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float InitializationLifeTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AuthorityDataSet;

public:
	DEADBYDAYLIGHT_API FStatusEffectInitializationData();
};

FORCEINLINE uint32 GetTypeHash(const FStatusEffectInitializationData) { return 0; }
