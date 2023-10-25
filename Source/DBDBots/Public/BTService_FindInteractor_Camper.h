#pragma once

#include "CoreMinimal.h"
#include "BTService_FindInteractor.h"
#include "EFindInteractableCamperFilter.h"
#include "AITunableParameter.h"
#include "BTService_FindInteractor_Camper.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTService_FindInteractor_Camper : public UBTService_FindInteractor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EFindInteractableCamperFilter StatusFilter;

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

public:
	UBTService_FindInteractor_Camper();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_FindInteractor_Camper) { return 0; }
