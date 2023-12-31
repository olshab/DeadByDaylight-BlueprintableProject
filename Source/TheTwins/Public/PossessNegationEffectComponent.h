#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PossessNegationEffectComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UPossessNegationEffectComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayCantPossessSound);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FPlayCantPossessSound PlayCantPossessSound;

protected:
	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

public:
	UPossessNegationEffectComponent();
};

FORCEINLINE uint32 GetTypeHash(const UPossessNegationEffectComponent) { return 0; }
