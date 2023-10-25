#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "S38P02StatusEffect.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class US38P02StatusEffect : public UStatusEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _headJointName;

public:
	US38P02StatusEffect();
};

FORCEINLINE uint32 GetTypeHash(const US38P02StatusEffect) { return 0; }
