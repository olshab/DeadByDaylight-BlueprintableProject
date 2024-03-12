#pragma once

#include "CoreMinimal.h"
#include "Collectable.h"
#include "Templates/SubclassOf.h"
#include "TagStateBool.h"
#include "K35Power.generated.h"

class UInteractionAttacherComponent;
class AK35KillerTeleportPointTargetingIndicator;
class AK35AreaBlast;
class UStatusEffect;
class AK35Decoy;
class ACamperPlayer;

UCLASS(Blueprintable)
class AK35Power : public ACollectable
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMoriStateChanged);

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnMoriStateChanged OnMoriBegin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnMoriStateChanged OnMoriEnd;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AK35AreaBlast> _areaBlastClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AK35Decoy> _decoyClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AK35KillerTeleportPointTargetingIndicator> _teleportPointTargetingIndicatorClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UStatusEffect> _extendedDestructionTimeWhenInfectedStatusEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UInteractionAttacherComponent* _interactionAttacherComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _cosmeticIdleTimerBuffer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _minKillerCosmeticIdleTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _maxKillerCosmeticIdleTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _minKillerTeleportPointCosmeticIdleTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _maxKillerTeleportPointCosmeticIdleTime;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	AK35AreaBlast* _areaBlast;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	AK35Decoy* _decoy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AK35KillerTeleportPointTargetingIndicator* _teleportPointTargetingIndicator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FTagStateBool _isKillerInMori;

private:
	UFUNCTION(BlueprintCallable)
	void OnSurvivorAdded(ACamperPlayer* survivor) const;

	UFUNCTION(BlueprintCallable)
	void OnKillerTeleportPointCosmeticIdleTimeComplete();

	UFUNCTION(BlueprintCallable)
	void OnKillerCosmeticIdleTimeComplete();

	UFUNCTION(BlueprintCallable)
	void OnIntroCompleted();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AK35Power();
};

FORCEINLINE uint32 GetTypeHash(const AK35Power) { return 0; }
