#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StatProperty.h"
#include "DBDAttackSubstate.generated.h"

class UCurveFloat;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UDBDAttackSubstate : public UObject
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FStatProperty _duration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* _speedCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _montage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UCurveFloat* _currentCurve;

public:
	UDBDAttackSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UDBDAttackSubstate) { return 0; }
