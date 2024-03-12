#pragma once

#include "CoreMinimal.h"
#include "GeneratorRepairInteraction.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "GeneratorToolboxRepairInteraction.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DBDINTERACTION_API UGeneratorToolboxRepairInteraction : public UGeneratorRepairInteraction
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FText _interactionTextWhenEmpty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _repairSkillCheckDurationWhenEmpty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _repairSkillCheckChanceWhenEmpty;

	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _stateTagsPreventingUseOfToolbox;

public:
	UFUNCTION(BlueprintPure)
	bool HasChargedToolBox(const ADBDPlayer* player) const;

protected:
	UFUNCTION(BlueprintPure)
	FString GetInteractionTextWhenEmpty() const;

public:
	UGeneratorToolboxRepairInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UGeneratorToolboxRepairInteraction) { return 0; }
