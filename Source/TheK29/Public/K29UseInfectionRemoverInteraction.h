#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ChargeableInteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "K29UseInfectionRemoverInteraction.generated.h"

class ACamperPlayer;
class UStatusEffect;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK29UseInfectionRemoverInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UStatusEffect> _killerInstinctClass;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _killerInstinctDuration;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void OnSurvivorCured_Cosmetic();

	UFUNCTION(BlueprintPure)
	ACamperPlayer* GetInteractionTarget() const;

public:
	UK29UseInfectionRemoverInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UK29UseInfectionRemoverInteraction) { return 0; }
