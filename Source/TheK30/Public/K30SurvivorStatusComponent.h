#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SurvivorStatusInterface.h"
#include "K30SurvivorStatusComponent.generated.h"

class ACamperPlayer;
class AK30Power;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK30SurvivorStatusComponent : public UActorComponent, public ISurvivorStatusInterface
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ACamperPlayer* _owningSurvivor;

	UPROPERTY(EditAnywhere, Replicated)
	TWeakObjectPtr<ACamperPlayer> _detectedSurvivor;

	UPROPERTY(EditAnywhere, Replicated)
	TWeakObjectPtr<AK30Power> _k30Power;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK30SurvivorStatusComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK30SurvivorStatusComponent) { return 0; }
