#pragma once

#include "CoreMinimal.h"
#include "DBDCharacterMovementComponent.h"
#include "UObject/NoExportTypes.h"
#include "ECamperDamageState.h"
#include "CamperMovementComponent.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UCamperMovementComponent : public UDBDCharacterMovementComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxCrawlSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxRunSpeed;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FRotator _defaultRotationRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator _rotationRateWhileCrawling;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* _dropStaggerDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* _dropStaggerMaxSpeed;

public:
	UFUNCTION(BlueprintCallable)
	void OnCamperHealthStateChanged(ECamperDamageState oldDamageState, ECamperDamageState currentDamageState);

	UFUNCTION(BlueprintPure)
	FRotator GetRotationRateWhileCrawling() const;

	UFUNCTION(BlueprintPure)
	float GetDropStaggerTimeLeft() const;

	UFUNCTION(BlueprintPure)
	FRotator GetDefaultRotationRate() const;

private:
	UFUNCTION(BlueprintCallable, Exec)
	void DBD_SurvivorMaxSpeedMultiplier(const float maxSpeedMultiplier);

	UFUNCTION(BlueprintCallable, Exec)
	void DBD_SimulateHack_LocalSurvivorMaxSpeedMultiplier(const float maxSpeedMultiplier);

	UFUNCTION(BlueprintCallable, Client, Reliable)
	void Client_Debug_SetSurvivorMaxSpeedMultiplier(const float maxSpeedMultiplier);

public:
	UCamperMovementComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCamperMovementComponent) { return 0; }
