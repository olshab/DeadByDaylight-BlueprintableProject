#pragma once

#include "CoreMinimal.h"
#include "AITunableParameter.h"
#include "BTDecorator_TickableBase.h"
#include "ETunableComparison.h"
#include "BTDecorator_IsTunable.generated.h"

UCLASS(Blueprintable)
class DBDBOTS_API UBTDecorator_IsTunable : public UBTDecorator_TickableBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ETunableComparison::Type> Operator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter TunableValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CompareToValue;

public:
	UBTDecorator_IsTunable();
};

FORCEINLINE uint32 GetTypeHash(const UBTDecorator_IsTunable) { return 0; }
