#pragma once

#include "CoreMinimal.h"
#include "BTService_FindInteractor.h"
#include "EFindInteractableCamperFilter.h"
#include "Templates/SubclassOf.h"
#include "AITunableParameter.h"
#include "BTService_FindInteractor_Camper.generated.h"

class UStatusEffect;

UCLASS(Blueprintable)
class DBDBOTS_API UBTService_FindInteractor_Camper : public UBTService_FindInteractor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EFindInteractableCamperFilter StatusFilter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<UStatusEffect>> IgnoreWhenTargetStatusEffects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RequiredAttentionMovementFrequency;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AttentionMovementFrequencyLerp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AttentionValidTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AttentionValidDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AttentionCooldownReduction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter AllyDangerStateGoalWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter IncapacitatedAlliesGoalWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter CrawlingRecoveryProgressGoalWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter CrawlingDeathTimerGoalWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter IdealKillerDistanceFromCrawling;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter MaxKillerProximityWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter AttentionWeight;

public:
	UBTService_FindInteractor_Camper();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_FindInteractor_Camper) { return 0; }
