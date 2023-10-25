#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AITunableParameter.h"
#include "DBDNavMeshExplorerComponent.generated.h"

class UDBDPathFollowingComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDBOTS_API UDBDNavMeshExplorerComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ExploreAtAgentMoveDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ExploreAtInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAITunableParameter ExplorationBoxHalfExtent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 FullyAutoExploredAtGameTime;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UDBDPathFollowingComponent* _pathFollowingComponent;

public:
	UDBDNavMeshExplorerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDBDNavMeshExplorerComponent) { return 0; }
