#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "S41P03.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class US41P03 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _selfUnhookBasementAlwaysSucceedEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _timedRevealKillerAuraEffectClass;

	UPROPERTY(EditAnywhere)
	float _auraDuration;

public:
	US41P03();
};

FORCEINLINE uint32 GetTypeHash(const US41P03) { return 0; }
