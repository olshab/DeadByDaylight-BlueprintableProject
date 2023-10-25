#pragma once

#include "CoreMinimal.h"
#include "EFindInteractableGeneratorStatusFilter.h"
#include "BTService_FindInteractor.h"
#include "AITunableParameter.h"
#include "BTService_FindInteractor_Generator.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTService_FindInteractor_Generator : public UBTService_FindInteractor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EFindInteractableGeneratorStatusFilter StatusFilter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter MinRepairRatioFilter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UsePerceptionToGetRepairRatio;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter MaxRepairGoalWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter InfectedStateGoalWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter HexRuinGoalWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName HexRuinPerkId;

public:
	UBTService_FindInteractor_Generator();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_FindInteractor_Generator) { return 0; }
