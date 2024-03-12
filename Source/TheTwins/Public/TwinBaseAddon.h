#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Templates/SubclassOf.h"
#include "TwinBaseAddon.generated.h"

class AConjoinedTwin;
class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UTwinBaseAddon : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _statusEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _customParam;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnTwinSet(AConjoinedTwin* twin);

public:
	UTwinBaseAddon();
};

FORCEINLINE uint32 GetTypeHash(const UTwinBaseAddon) { return 0; }
