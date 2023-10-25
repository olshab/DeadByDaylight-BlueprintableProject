#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ChargeableInteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "RemoveReverseBearTrapChargeable.generated.h"

class ACamperPlayer;
class UStatusEffect;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class THEPIG_API URemoveReverseBearTrapChargeable : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _audibleRangeOnSearch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _timedRevealStatusEffect;

private:
	UFUNCTION(BlueprintPure)
	bool HasSuccessfullyRemoved() const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void BP_OnFinishWithoutDetach(ACamperPlayer* searchingPlayer);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void BP_OnFinishWithDetach(ACamperPlayer* searchingPlayer);

public:
	URemoveReverseBearTrapChargeable();
};

FORCEINLINE uint32 GetTypeHash(const URemoveReverseBearTrapChargeable) { return 0; }
