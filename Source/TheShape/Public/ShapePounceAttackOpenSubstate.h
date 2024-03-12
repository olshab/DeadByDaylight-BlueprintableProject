#pragma once

#include "CoreMinimal.h"
#include "PounceAttackOpenSubstate.h"
#include "DBDTunableRowHandle.h"
#include "ShapePounceAttackOpenSubstate.generated.h"

UCLASS(Blueprintable)
class THESHAPE_API UShapePounceAttackOpenSubstate : public UPounceAttackOpenSubstate
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FDBDTunableRowHandle> _tierDurations;

public:
	UFUNCTION(BlueprintPure)
	float GetShapePounceAttackOpenDuration() const;

public:
	UShapePounceAttackOpenSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UShapePounceAttackOpenSubstate) { return 0; }
