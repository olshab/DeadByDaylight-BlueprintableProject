#pragma once

#include "CoreMinimal.h"
#include "AISkill_FindInteractable.h"
#include "KillerFilterItem.h"
#include "Templates/SubclassOf.h"
#include "AITunableParameter.h"
#include "PerkIdDropdown.h"
#include "AISkill_FindInteractable_SeanceSpot.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class DBDBOTS_API UAISkill_FindInteractable_SeanceSpot : public UAISkill_FindInteractable
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FKillerFilterItem> LowerExposedValueKillers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FKillerFilterItem> DirectTeleportKillers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<AActor>> TeleportInteractables;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FPerkIdDropdown NoMitherPerk;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter PerHookWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter LowerExposedValueWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter TeleportKillerWeightPenalty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter KillerDistanceMaxWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter KillerMaxDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter KillerInChaseWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter KillerMovingAwayWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter KillerMovingAwayMaxAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter LastSeenWeightPenalty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter LastSeenMaxTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter LastVisitedWeightPenalty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter LastVisitedMaxTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter JoinBaseWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter JoinWithPerkWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter SeanceOriginatorWeight;

private:
	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

public:
	UAISkill_FindInteractable_SeanceSpot();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_FindInteractable_SeanceSpot) { return 0; }
