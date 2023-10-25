#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LocalPlayerTrackerDelegate.h"
#include "LocalPlayerTrackerComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API ULocalPlayerTrackerComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FLocalPlayerTrackerDelegate TrackerOnLocallyObservedChanged;

public:
	UFUNCTION(BlueprintCallable)
	void TriggerOnLocallyObservedChanged();

public:
	ULocalPlayerTrackerComponent();
};

FORCEINLINE uint32 GetTypeHash(const ULocalPlayerTrackerComponent) { return 0; }
