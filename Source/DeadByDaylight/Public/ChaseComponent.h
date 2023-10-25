#pragma once

#include "CoreMinimal.h"
#include "OnIsInChaseChanged.h"
#include "ChaseEndDelegate.h"
#include "AllChasesEndedDelegate.h"
#include "Components/ActorComponent.h"
#include "ChaseStartDelegate.h"
#include "TagStateBool.h"
#include "ChaseComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UChaseComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FChaseStartDelegate OnChaseStarted;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FChaseEndDelegate OnChaseEnded;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FAllChasesEndedDelegate OnAllChaseEnded;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnIsInChaseChanged OnIsInChaseChanged;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsInChase, meta=(AllowPrivateAccess=true))
	FTagStateBool _isInChase;

protected:
	UFUNCTION(BlueprintCallable)
	void OnRep_IsInChase();

public:
	UFUNCTION(BlueprintPure)
	bool IsInChase() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UChaseComponent();
};

FORCEINLINE uint32 GetTypeHash(const UChaseComponent) { return 0; }
