#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "DBDTunableRowHandle.h"
#include "SurvivorWasRecentlyUnhookedEffect.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class USurvivorWasRecentlyUnhookedEffect : public UStatusEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _survivorWasRecentlyUnhookedDuration;

public:
	USurvivorWasRecentlyUnhookedEffect();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorWasRecentlyUnhookedEffect) { return 0; }
