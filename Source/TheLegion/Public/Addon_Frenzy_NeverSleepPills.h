#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Addon_Frenzy_NeverSleepPills.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THELEGION_API UAddon_Frenzy_NeverSleepPills : public UItemAddon
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _speedModifierDuringFrenzy;

public:
	UAddon_Frenzy_NeverSleepPills();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_Frenzy_NeverSleepPills) { return 0; }
