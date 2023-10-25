#pragma once

#include "CoreMinimal.h"
#include "ActorPoolComponent.h"
#include "AuthoritativeActorPoolComponent.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class GAMEPLAYUTILITIES_API UAuthoritativeActorPoolComponent : public UActorPoolComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_ReplicatedPool, Transient, meta=(AllowPrivateAccess=true))
	TArray<AActor*> _replicatedPool;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<AActor*> _local_oldPool;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_ReplicatedPool();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UAuthoritativeActorPoolComponent();
};

FORCEINLINE uint32 GetTypeHash(const UAuthoritativeActorPoolComponent) { return 0; }
