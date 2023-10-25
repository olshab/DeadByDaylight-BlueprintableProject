#pragma once

#include "CoreMinimal.h"
#include "EFindInteractableMeatHookStatus.h"
#include "BTService_FindInteractor.h"
#include "AITunableParameter.h"
#include "BTService_FindInteractor_MeatHook.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTService_FindInteractor_MeatHook : public UBTService_FindInteractor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EFindInteractableMeatHookStatus StatusFilter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter AllyDangerStateGoalWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter BotDangerStateGoalWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter BotInjuredStateGoalWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter HumanAllyHookedGoalWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter MaxHookTimeGoalWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter IncapacitatedAlliesGoalWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter IdealKillerDistanceFromHook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter MaxKillerProximityWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter SabotageKillerDistanceToHookScore;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter SabotageKillerSpeedToHookScore;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter SabotageHookValidTargetTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float KillerTargetUpdateInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float UnsafeSabotageHealthyMarginTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float UnsafeSabotageInjuredMarginTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString NoToolboxInteractionID;

public:
	UBTService_FindInteractor_MeatHook();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_FindInteractor_MeatHook) { return 0; }
