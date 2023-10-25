#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StatusEffect.h"
#include "Templates/SubclassOf.h"
#include "TwinJumpTargetVisibleEffect.generated.h"

class AActor;
class USelectiveVisibilityComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UTwinJumpTargetVisibleEffect : public UStatusEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<AActor> _twinJumpTargetObject;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AActor* _twinJumpTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	USelectiveVisibilityComponent* _jumpTargetVisibility;

private:
	UFUNCTION(BlueprintCallable)
	void OnJumpTargetTick(FVector location);

	UFUNCTION(BlueprintCallable)
	void OnHideTargetPosition();

public:
	UTwinJumpTargetVisibleEffect();
};

FORCEINLINE uint32 GetTypeHash(const UTwinJumpTargetVisibleEffect) { return 0; }
