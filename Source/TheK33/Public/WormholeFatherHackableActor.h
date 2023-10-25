#pragma once

#include "CoreMinimal.h"
#include "GameEventData.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "WormholeFatherHackableActor.generated.h"

class UWormholeFatherHackingComponent;

UCLASS(Blueprintable)
class AWormholeFatherHackableActor : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTagContainer _hackedGameEvents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidget))
	UWormholeFatherHackingComponent* _hackingComponent;

protected:
	UFUNCTION(BlueprintNativeEvent)
	void OnHackedEvent(const FGameplayTag gameEvent, const FGameEventData& gameEventData);

public:
	AWormholeFatherHackableActor();
};

FORCEINLINE uint32 GetTypeHash(const AWormholeFatherHackableActor) { return 0; }
