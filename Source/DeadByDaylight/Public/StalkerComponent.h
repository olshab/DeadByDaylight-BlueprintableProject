#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StalkerComponent.generated.h"

class UChargeableComponent;
class UStalkedComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UStalkerComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStalkPointsAdded, float, stalkPoints);

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _distributeStalkRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _canStalkWhileInChase;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UStalkedComponent*> _playerStalkedComponents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _stalkPointsChargeable;

private:
	UFUNCTION(BlueprintCallable)
	void OnPlayerBeingStalkedChanged(bool isBeingStalked);

public:
	UFUNCTION(BlueprintPure)
	bool IsStalkingSomeone() const;

	UFUNCTION(BlueprintPure)
	bool HasMaxStalkPoints() const;

	UFUNCTION(BlueprintPure)
	float GetTotalStalkingPoints() const;

	UFUNCTION(BlueprintPure)
	float GetScoreMultiplier() const;

	UFUNCTION(BlueprintPure)
	float GetPercentStalkingPoints() const;

	UFUNCTION(BlueprintPure)
	float GetMaxStalkingPoints() const;

	UFUNCTION(BlueprintPure)
	bool CanStalk() const;

public:
	UStalkerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UStalkerComponent) { return 0; }
