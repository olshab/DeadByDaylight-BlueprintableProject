#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CoreMemoryStatusEffectDetails.generated.h"

class UStatusEffect;

USTRUCT(BlueprintType)
struct FCoreMemoryStatusEffectDetails
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _statusEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FString _effectDurationParamKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FString _customEffectParamKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _effectDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _customEffectParam;

public:
	COREMEMORY_API FCoreMemoryStatusEffectDetails();
};

FORCEINLINE uint32 GetTypeHash(const FCoreMemoryStatusEffectDetails) { return 0; }
