#pragma once

#include "CoreMinimal.h"
#include "KillerVaultDefinition.h"
#include "K34VaultInteraction.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class THEK34_API UK34VaultInteraction : public UKillerVaultDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UCurveFloat* _cachedChainingLimitationCurve;

public:
	UK34VaultInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UK34VaultInteraction) { return 0; }
