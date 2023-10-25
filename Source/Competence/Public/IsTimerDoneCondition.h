#pragma once

#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "IsTimerDoneCondition.generated.h"

class UTimerObject;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UIsTimerDoneCondition : public UEventDrivenModifierCondition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_Timer, Transient, Export, meta=(AllowPrivateAccess=true))
	UTimerObject* _timer;

public:
	UFUNCTION(BlueprintCallable)
	void SetTimer(UTimerObject* timer);

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_Timer();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UIsTimerDoneCondition();
};

FORCEINLINE uint32 GetTypeHash(const UIsTimerDoneCondition) { return 0; }
