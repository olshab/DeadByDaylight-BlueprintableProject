#pragma once

#include "CoreMinimal.h"
#include "ConditionReceiver.h"
#include "EventDrivenModifierCondition.h"
#include "CompositeModifierCondition.generated.h"

UCLASS(Blueprintable, Abstract, meta=(BlueprintSpawnableComponent))
class COMPETENCE_API UCompositeModifierCondition : public UEventDrivenModifierCondition, public IConditionReceiver
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_Conditions, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UEventDrivenModifierCondition*> _conditions;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_Conditions();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UCompositeModifierCondition();
};

FORCEINLINE uint32 GetTypeHash(const UCompositeModifierCondition) { return 0; }
