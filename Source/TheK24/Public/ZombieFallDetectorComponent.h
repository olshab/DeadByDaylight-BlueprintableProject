#pragma once

#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "ZombieFallDetectorComponent.generated.h"

class ACharacter;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UZombieFallDetectorComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _zombieDistanceConsideredSmashFall;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnMovementModeChange(ACharacter* character, TEnumAsByte<EMovementMode> prevMovementMode, uint8 previousCustomMode);

public:
	UZombieFallDetectorComponent();
};

FORCEINLINE uint32 GetTypeHash(const UZombieFallDetectorComponent) { return 0; }
