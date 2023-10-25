#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplaySpawnerComponent.generated.h"

UCLASS(Blueprintable, Abstract, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UGameplaySpawnerComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_SpawnedComponents, Export, meta=(AllowPrivateAccess=true))
	TArray<UActorComponent*> _spawnedComponents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	int32 _numComponentsSpawned;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	int32 _numComponentsToSpawn;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_SpawnedComponents();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UGameplaySpawnerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UGameplaySpawnerComponent) { return 0; }
