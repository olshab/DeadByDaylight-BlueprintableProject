#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "HookSurvivorDefinition.generated.h"

class ACamperPlayer;
class AMeatHook;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DBDINTERACTION_API UHookSurvivorDefinition : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ACamperPlayer* _survivorBeingHooked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _smallestScreamTime;

protected:
	UFUNCTION(BlueprintPure)
	AMeatHook* GetMeatHook() const;

public:
	UHookSurvivorDefinition();
};

FORCEINLINE uint32 GetTypeHash(const UHookSurvivorDefinition) { return 0; }
