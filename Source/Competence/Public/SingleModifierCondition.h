#pragma once

#include "CoreMinimal.h"
#include "ConditionReceiver.h"
#include "EventDrivenModifierCondition.h"
#include "SingleModifierCondition.generated.h"

UCLASS(Blueprintable, Abstract, meta=(BlueprintSpawnableComponent))
class COMPETENCE_API USingleModifierCondition : public UEventDrivenModifierCondition, public IConditionReceiver
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_Condition, Transient, meta=(BindWidgetOptional))
	UEventDrivenModifierCondition* _condition;

protected:
	UFUNCTION(BlueprintCallable)
	void OnRep_Condition();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	USingleModifierCondition();
};

FORCEINLINE uint32 GetTypeHash(const USingleModifierCondition) { return 0; }
