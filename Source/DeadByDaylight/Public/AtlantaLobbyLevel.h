#pragma once

#include "CoreMinimal.h"
#include "LobbyLevel.h"
#include "Engine/EngineTypes.h"
#include "AtlantaLobbyLevel.generated.h"

class AActor;
class AAtlantaOfflineLobbyCamera;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API AAtlantaLobbyLevel : public ALobbyLevel
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FLightingChannels ForefrontLightingChannel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FLightingChannels BackgroundLightingChannel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AAtlantaOfflineLobbyCamera* _offlineLobbyCamera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AActor* _roleSelectionLobbyCameraPosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AActor* _characterSelectionLobbyCameraPosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AActor* _loadoutSelectionLobbyCameraPosition;

private:
	UFUNCTION(BlueprintCallable)
	void OnFrontPawnSpawned(AActor* forefrontPawn);

	UFUNCTION(BlueprintCallable)
	void OnBackPawnSpawned(AActor* backgroundPawn);

public:
	AAtlantaLobbyLevel();
};

FORCEINLINE uint32 GetTypeHash(const AAtlantaLobbyLevel) { return 0; }
