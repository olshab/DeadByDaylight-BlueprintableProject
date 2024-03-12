#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SpawnedActorReplicationComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API USpawnedActorReplicationComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	TArray<FName> _replicatedTags;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	USpawnedActorReplicationComponent();
};

FORCEINLINE uint32 GetTypeHash(const USpawnedActorReplicationComponent) { return 0; }
