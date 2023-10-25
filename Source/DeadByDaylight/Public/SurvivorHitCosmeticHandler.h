#pragma once

#include "CoreMinimal.h"
#include "BaseReversibleInstantActionHandler.h"
#include "AnimationMontageDescriptor.h"
#include "SurvivorHitCosmeticHandler.generated.h"

class UNiagaraComponent;

UCLASS(Blueprintable)
class USurvivorHitCosmeticHandler : public UBaseReversibleInstantActionHandler
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UNiagaraComponent* _bloodSpurts;

private:
	UFUNCTION(BlueprintCallable)
	void OnMontageStarted(const FAnimationMontageDescriptor animMontageID, const float playRate);

public:
	USurvivorHitCosmeticHandler();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorHitCosmeticHandler) { return 0; }
