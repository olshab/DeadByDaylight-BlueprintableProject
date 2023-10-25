#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnFirecrackerInRangeEndEvent.h"
#include "OnFirecrackerInRangeBeginEvent.h"
#include "FirecrackerEffectHandlerComponent.generated.h"

class AFirecracker;
class AActor;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UFirecrackerEffectHandlerComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnFirecrackerInRangeBeginEvent OnFirecrackerInRangeBegin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnFirecrackerInRangeEndEvent OnFirecrackerInRangeEnd;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TSet<AFirecracker*> _inRangeFirecrackers;

private:
	UFUNCTION(BlueprintCallable)
	void OnFirecrackerDestroyed(AActor* destroyedActor);

public:
	UFirecrackerEffectHandlerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UFirecrackerEffectHandlerComponent) { return 0; }
