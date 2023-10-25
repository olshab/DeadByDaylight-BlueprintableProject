#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Templates/SubclassOf.h"
#include "BaseImposeEffectOnFrenzyBleedout.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THELEGION_API UBaseImposeEffectOnFrenzyBleedout : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _statusEffectToImpose;

public:
	UBaseImposeEffectOnFrenzyBleedout();
};

FORCEINLINE uint32 GetTypeHash(const UBaseImposeEffectOnFrenzyBleedout) { return 0; }
