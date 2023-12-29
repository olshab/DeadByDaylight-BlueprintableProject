#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Templates/SubclassOf.h"
#include "MatchboxAddon.generated.h"

class USpeedOverrideEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THENURSE_API UMatchboxAddon : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _speedModifier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<USpeedOverrideEffect> _speedOverrideEffectClass;

public:
	UMatchboxAddon();
};

FORCEINLINE uint32 GetTypeHash(const UMatchboxAddon) { return 0; }
