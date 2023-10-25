#pragma once

#include "CoreMinimal.h"
#include "BTService_OnRelevantBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTService_SetFocusCooldown.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTService_SetFocusCooldown : public UBTService_OnRelevantBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FBlackboardKeySelector BBOnObject;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ContextName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool InfiniteDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Duration;

public:
	UBTService_SetFocusCooldown();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_SetFocusCooldown) { return 0; }
