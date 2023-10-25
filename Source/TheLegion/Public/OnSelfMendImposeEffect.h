#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "Templates/SubclassOf.h"
#include "OnSelfMendImposeEffect.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THELEGION_API UOnSelfMendImposeEffect : public UStatusEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _statusEffectTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _statusEffectToImpose;

public:
	UOnSelfMendImposeEffect();
};

FORCEINLINE uint32 GetTypeHash(const UOnSelfMendImposeEffect) { return 0; }
