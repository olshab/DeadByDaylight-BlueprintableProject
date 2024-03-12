#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "NegatableDialogHandlerCondition.generated.h"

class UDialogHandlerCondition;

USTRUCT(BlueprintType)
struct FNegatableDialogHandlerCondition
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UDialogHandlerCondition> ConditionClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UDialogHandlerCondition* ConditionInstance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsNegated;

public:
	DEADBYDAYLIGHT_API FNegatableDialogHandlerCondition();
};

FORCEINLINE uint32 GetTypeHash(const FNegatableDialogHandlerCondition) { return 0; }
