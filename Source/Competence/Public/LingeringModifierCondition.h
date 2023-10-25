#pragma once

#include "CoreMinimal.h"
#include "SingleModifierCondition.h"
#include "LingeringModifierCondition.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class COMPETENCE_API ULingeringModifierCondition : public USingleModifierCondition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	float _timeConditionIsTracked;

private:
	UFUNCTION(BlueprintCallable)
	void OnTimerEnd();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ULingeringModifierCondition();
};

FORCEINLINE uint32 GetTypeHash(const ULingeringModifierCondition) { return 0; }
