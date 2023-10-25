#pragma once

#include "CoreMinimal.h"
#include "BaseLingeringStatusEffect.h"
#include "StreetwiseEffect.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THENURSE_API UStreetwiseEffect : public UBaseLingeringStatusEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _range;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnInRangeChanged(const bool inRange);

public:
	UStreetwiseEffect();
};

FORCEINLINE uint32 GetTypeHash(const UStreetwiseEffect) { return 0; }
