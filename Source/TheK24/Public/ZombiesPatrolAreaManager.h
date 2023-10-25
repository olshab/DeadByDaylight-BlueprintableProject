#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ZombiesPatrolAreaManager.generated.h"

class AMeatHook;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UZombiesPatrolAreaManager : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<AMeatHook*> _availablePatrolAreas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<AMeatHook*> _usedPatrolAreas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _maxDistanceBetweenMeatHookAndPlayers;

public:
	UZombiesPatrolAreaManager();
};

FORCEINLINE uint32 GetTypeHash(const UZombiesPatrolAreaManager) { return 0; }
