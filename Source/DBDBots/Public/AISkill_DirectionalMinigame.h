#pragma once

#include "CoreMinimal.h"
#include "AISkill.h"
#include "EDirectionalMinigameResult.h"
#include "AIRoll.h"
#include "AITunableParameter.h"
#include "EDirectionalInputKey.h"
#include "AISkill_DirectionalMinigame.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDBOTS_API UAISkill_DirectionalMinigame : public UAISkill
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAIRoll InputRoll;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter InputTimeMinimum;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter InputTimeVariance;

private:
	UFUNCTION(BlueprintCallable)
	void OnMinigameStart(TArray<EDirectionalInputKey> sequence, int32 currentIndex);

	UFUNCTION(BlueprintCallable)
	void OnMinigameEnd(EDirectionalMinigameResult result);

public:
	UAISkill_DirectionalMinigame();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_DirectionalMinigame) { return 0; }
