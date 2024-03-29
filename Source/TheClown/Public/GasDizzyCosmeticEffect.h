#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GasDizzyCosmeticEffect.generated.h"

class UPostProcessComponent;

UCLASS(Blueprintable, Abstract)
class THECLOWN_API AGasDizzyCosmeticEffect : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UPostProcessComponent* _dizzyPostProcess;

public:
	UFUNCTION(BlueprintCallable)
	void SetWantsDizzyEffectActive(bool isActive);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_SetDizzyEffectActive(bool isActive);

public:
	AGasDizzyCosmeticEffect();
};

FORCEINLINE uint32 GetTypeHash(const AGasDizzyCosmeticEffect) { return 0; }
