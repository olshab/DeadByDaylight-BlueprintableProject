#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Templates/SubclassOf.h"
#include "GlassBeadMapAddon.generated.h"

class UInteractionDefinition;
class AMapMarkerActor;
class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UGlassBeadMapAddon : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _spawningCooldownTimer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<AMapMarkerActor> _mapMarkerBPClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AMapMarkerActor* _currentMapMarker;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnSecondaryInputPressed(ADBDPlayer* player, UInteractionDefinition* interaction, bool fromCancelRequest);

public:
	UGlassBeadMapAddon();
};

FORCEINLINE uint32 GetTypeHash(const UGlassBeadMapAddon) { return 0; }
