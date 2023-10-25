#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "HagScoreComponent.generated.h"

class AActor;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEHAG_API UHagScoreComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _trapAttackDuration;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnActorEndPlay(AActor* actor, TEnumAsByte<EEndPlayReason::Type> endPlayReason);

public:
	UHagScoreComponent();
};

FORCEINLINE uint32 GetTypeHash(const UHagScoreComponent) { return 0; }
