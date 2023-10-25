#pragma once

#include "CoreMinimal.h"
#include "Engine/LevelScriptActor.h"
#include "EWorldFlowEvent.h"
#include "LobbyLevel.generated.h"

class ADisplayStand;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API ALobbyLevel : public ALevelScriptActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ADisplayStand*> _registeredDisplayStands;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	EWorldFlowEvent LobbyLoadedEvent;

private:
	UFUNCTION(BlueprintCallable)
	void OnShopSubLevelLoaded();

	UFUNCTION(BlueprintCallable)
	void OnLobbySubLevelLoaded();

	UFUNCTION(BlueprintCallable)
	void OnAdditionalSubLevelsLoaded();

public:
	ALobbyLevel();
};

FORCEINLINE uint32 GetTypeHash(const ALobbyLevel) { return 0; }
