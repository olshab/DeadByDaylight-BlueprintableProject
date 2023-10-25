#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "SnowmanWinterEventPlayerComponent.generated.h"

class ADBDPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class SNOWMANWINTEREVENT_API USnowmanWinterEventPlayerComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _maxTrackedTimeSinceSnowmanExit;

	UPROPERTY(EditAnywhere, Transient)
	TSet<TWeakObjectPtr<ADBDPlayer>> _previouslyHighFivedPlayers;

public:
	USnowmanWinterEventPlayerComponent();
};

FORCEINLINE uint32 GetTypeHash(const USnowmanWinterEventPlayerComponent) { return 0; }
