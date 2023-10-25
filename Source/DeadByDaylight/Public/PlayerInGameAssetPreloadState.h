#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerInGameAssetPreloadState.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UPlayerInGameAssetPreloadState : public UActorComponent
{
	GENERATED_BODY()

private:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_SetPreloadCompleted(const FString& preloadInfo);

public:
	UPlayerInGameAssetPreloadState();
};

FORCEINLINE uint32 GetTypeHash(const UPlayerInGameAssetPreloadState) { return 0; }
