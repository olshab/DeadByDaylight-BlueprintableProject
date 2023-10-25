#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StalkedComponent.generated.h"

class UChargeableComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UStalkedComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBeingStalkedChanged, bool, isBeingStalked);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnBeingStalkedChanged OnBeingStalkedChanged;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_MaxStalkPoints, meta=(AllowPrivateAccess=true))
	float _maxStalkPoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _stalkableWhileSightingStalker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsBeingStalked, meta=(AllowPrivateAccess=true))
	bool _isBeingStalked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UChargeableComponent* _stalkPointsChargeable;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_MaxStalkPoints();

	UFUNCTION(BlueprintCallable)
	void OnRep_IsBeingStalked();

public:
	UFUNCTION(BlueprintPure)
	bool HasStalkPoints() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UStalkedComponent();
};

FORCEINLINE uint32 GetTypeHash(const UStalkedComponent) { return 0; }
