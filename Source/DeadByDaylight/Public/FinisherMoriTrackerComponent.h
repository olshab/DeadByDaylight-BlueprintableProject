#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FinisherMoriTrackerComponent.generated.h"

class ACamperPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UFinisherMoriTrackerComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ACamperPlayer*> _survivorsDowned;

public:
	UFinisherMoriTrackerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UFinisherMoriTrackerComponent) { return 0; }
