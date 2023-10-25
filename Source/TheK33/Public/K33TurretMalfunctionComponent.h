#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "K33TurretMalfunctionComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK33TurretMalfunctionComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FTunableStat _malfunctionDuration;

public:
	UK33TurretMalfunctionComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK33TurretMalfunctionComponent) { return 0; }
