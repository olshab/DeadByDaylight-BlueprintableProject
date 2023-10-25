#pragma once

#include "CoreMinimal.h"
#include "EK33Foot.h"
#include "GameFramework/Actor.h"
#include "OnAcquiredChanged.h"
#include "PoolableActor.h"
#include "UObject/NoExportTypes.h"
#include "K33FeetVFX.generated.h"

UCLASS(Blueprintable)
class THEK33_API AK33FeetVFX : public AActor, public IPoolableActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EK33Foot _currentFootType;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _footstepEffectDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable, meta=(AllowPrivateAccess=true))
	FOnAcquiredChanged OnAcquiredChanged;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TriggerFootstepVisibility(EK33Foot footType, bool isVisible);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TriggerFootstepTimeline(EK33Foot footType, float effectLifetime, const FVector& killerLocation);

public:
	AK33FeetVFX();
};

FORCEINLINE uint32 GetTypeHash(const AK33FeetVFX) { return 0; }
