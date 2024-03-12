#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "SpawnEffectsOnAllSurvivorsBaseAddon.h"
#include "Templates/SubclassOf.h"
#include "Addon_K22Power_17.generated.h"

class AConjoinedTwin;
class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UAddon_K22Power_17 : public USpawnEffectsOnAllSurvivorsBaseAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _twinDormantObliviousEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _lingerDuration;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnTwinSet(AConjoinedTwin* twin);

public:
	UAddon_K22Power_17();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_K22Power_17) { return 0; }
