#pragma once

#include "CoreMinimal.h"
#include "AITunableParameter.h"
#include "AISkill_Find.h"
#include "AISkill_Find_StrengthInShadows.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDBOTS_API UAISkill_Find_StrengthInShadows : public UAISkill_Find
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter KillerDistanceMaxWeightPenalty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter KillerMaxDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BasementVerticalOffset;

private:
	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

public:
	UAISkill_Find_StrengthInShadows();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_Find_StrengthInShadows) { return 0; }
