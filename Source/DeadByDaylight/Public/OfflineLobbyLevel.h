#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "LobbyLevel.h"
#include "UObject/NoExportTypes.h"
#include "EOfflineLobbyState.h"
#include "OfflineLobbyLevel.generated.h"

class AActor;
class ATargetPoint;
class AMenuMeatHook;
class ADBDMenuSilhouette;
class ACharm;
class APlayerStart;
class ADisplayStand;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API AOfflineLobbyLevel : public ALobbyLevel
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector _partyLobbyInviteButtonOffset;

private:
	UPROPERTY(EditAnywhere)
	TArray<TWeakObjectPtr<APlayerStart>> _roleSelectionCamperSpawns;

	UPROPERTY(EditAnywhere)
	TArray<TWeakObjectPtr<APlayerStart>> _roleSelectionSlasherSpawns;

	UPROPERTY(EditAnywhere)
	TWeakObjectPtr<ADisplayStand> _offlineLobbyLocalSlasherSpawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FVector _partyLobbyEmptySlotFxOffset;

	UPROPERTY(EditAnywhere)
	TWeakObjectPtr<ADisplayStand> _offlineLobbyLocalCamperSpawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FVector> _partyLobbySlasherPOVTrackerOffsets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSoftClassPtr<ADBDMenuSilhouette> _partyLobbyEmptySlotSilhouette;

	UPROPERTY(EditAnywhere)
	TArray<TWeakObjectPtr<ADisplayStand>> _partyLobbySlasherDisplayStands;

	UPROPERTY(EditAnywhere)
	TArray<TWeakObjectPtr<ADisplayStand>> _partyLobbyCamperDisplayStands;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FVector _moriPreviewSpawnLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSoftClassPtr<AMenuMeatHook> _meatHookForCustomization;

	UPROPERTY(EditAnywhere)
	TWeakObjectPtr<ATargetPoint> _meatHookSpawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSoftClassPtr<ACharm> _charmForCustomizationZoom;

	UPROPERTY(EditAnywhere)
	TWeakObjectPtr<ATargetPoint> _camperCharmSpawn;

	UPROPERTY(EditAnywhere)
	TWeakObjectPtr<ATargetPoint> _slasherCharmSpawn;

	UPROPERTY(EditAnywhere, Transient)
	TMap<TWeakObjectPtr<ADisplayStand>, TWeakObjectPtr<ADBDMenuSilhouette>> _partyLobbyEmptySlotPawns;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<AActor*> _destroyingPawns;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnStateChanged(EOfflineLobbyState lobbyState);

protected:
	UFUNCTION(BlueprintCallable)
	void CheckDestroyingPawns(AActor* DestroyedActor);

public:
	AOfflineLobbyLevel();
};

FORCEINLINE uint32 GetTypeHash(const AOfflineLobbyLevel) { return 0; }
