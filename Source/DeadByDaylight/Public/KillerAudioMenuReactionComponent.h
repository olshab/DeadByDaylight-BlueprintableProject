#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "KillerAudioMenuReactionComponent.generated.h"

class ADBDMenuPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UKillerAudioMenuReactionComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UFUNCTION(BlueprintCallable)
	void OnLobbyTimeChanged();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void LobbyKillerReactionSpecificSurvivorSFX(const TArray<ADBDMenuPlayer*>& menuPlayers);

public:
	UKillerAudioMenuReactionComponent();
};

FORCEINLINE uint32 GetTypeHash(const UKillerAudioMenuReactionComponent) { return 0; }
