#pragma once

#include "CoreMinimal.h"
#include "DBDSkeletalMeshComponentBudgeted.h"
#include "WorldRunawayMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UWorldRunawayMeshComponent : public UDBDSkeletalMeshComponentBudgeted
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ResetCooldown;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _runAwayMustTickDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _returnMustTickDuration;

public:
	UFUNCTION(BlueprintCallable)
	void SetShouldRunAwayWithRandomDelay(bool should, float delayRange);

	UFUNCTION(BlueprintCallable)
	void SetShouldRunAwayWithDelay(bool should, float delay);

	UFUNCTION(BlueprintCallable)
	void SetShouldRunAway(bool should);

	UFUNCTION(BlueprintPure)
	bool GetShouldRunAway() const;

public:
	UWorldRunawayMeshComponent();
};

FORCEINLINE uint32 GetTypeHash(const UWorldRunawayMeshComponent) { return 0; }
