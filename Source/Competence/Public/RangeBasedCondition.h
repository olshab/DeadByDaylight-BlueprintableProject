#pragma once

#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "RangeBasedCondition.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class COMPETENCE_API URangeBasedCondition : public UEventDrivenModifierCondition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_Range, Transient, meta=(AllowPrivateAccess=true))
	float _range;

public:
	UFUNCTION(BlueprintCallable)
	void SetRange(float newRange);

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_Range();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	URangeBasedCondition();
};

FORCEINLINE uint32 GetTypeHash(const URangeBasedCondition) { return 0; }
