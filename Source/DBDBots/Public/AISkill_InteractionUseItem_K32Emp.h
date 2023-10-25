#pragma once

#include "CoreMinimal.h"
#include "AISkill_InteractionUseItem.h"
#include "AISkill_InteractionUseItem_K32Emp.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDBOTS_API UAISkill_InteractionUseItem_K32Emp : public UAISkill_InteractionUseItem
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float NearPodDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName BBIsFleeing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SurvivorHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DoNotUseEmpUnderNavLinkDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxTimeToUseEmpAfterLockonCooldown;

public:
	UAISkill_InteractionUseItem_K32Emp();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_InteractionUseItem_K32Emp) { return 0; }
