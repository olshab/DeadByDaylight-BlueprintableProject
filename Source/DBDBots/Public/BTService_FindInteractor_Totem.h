#pragma once

#include "CoreMinimal.h"
#include "BTService_FindInteractor.h"
#include "AITunableParameter.h"
#include "AICleansePerkCondition.h"
#include "BTService_FindInteractor_Totem.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTService_FindInteractor_Totem : public UBTService_FindInteractor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter InactiveGoalWeightMaxDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter InactiveGoalWeightAtMinDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FAICleansePerkCondition> CleansePerks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool SearchUsingBoundPerks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> BoundPerkIds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool OnlyWhenInjured;

public:
	UBTService_FindInteractor_Totem();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_FindInteractor_Totem) { return 0; }
