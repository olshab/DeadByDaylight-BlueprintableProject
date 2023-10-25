#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "KillerRedStainUpdateStrategy.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UKillerRedStainUpdateStrategy : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* _stealthRatioToRedStainIntensityCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTagContainer _hideRedStainStateTags;

private:
	UFUNCTION(BlueprintCallable)
	void OnHeadHiddenChanged(bool isHidden);

public:
	UKillerRedStainUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UKillerRedStainUpdateStrategy) { return 0; }
