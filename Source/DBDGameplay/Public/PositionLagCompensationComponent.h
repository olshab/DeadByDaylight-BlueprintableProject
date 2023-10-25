#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PositionLagCompensationComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UPositionLagCompensationComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _maxExtrapolationDurationInSeconds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _maxInterpolationToServerMoveInSeconds;

public:
	UPositionLagCompensationComponent();
};

FORCEINLINE uint32 GetTypeHash(const UPositionLagCompensationComponent) { return 0; }
