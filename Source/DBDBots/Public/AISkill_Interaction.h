#pragma once

#include "CoreMinimal.h"
#include "EPawnInputPressTypes.h"
#include "AISkill.h"
#include "EInteractionSkillInputModes.h"
#include "EInteractionCancelInputModes.h"
#include "AIRoll.h"
#include "AISkill_Interaction.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDBOTS_API UAISkill_Interaction : public UAISkill
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPawnInputPressTypes InputType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EInteractionSkillInputModes InputMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPawnInputPressTypes CancelInputType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EInteractionCancelInputModes CancelInputMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AutoLockInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAIRoll StartRoll;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString StartInteractionID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString StopInteractionID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinHoldInputTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AutoReleaseHoldInputWhenCharged;

public:
	UAISkill_Interaction();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_Interaction) { return 0; }
