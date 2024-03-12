#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StandInMeshActor.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable, MinimalAPI)
class AStandInMeshActor : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UStaticMeshComponent* StaticMeshComponent;

public:
	AStandInMeshActor();
};

FORCEINLINE uint32 GetTypeHash(const AStandInMeshActor) { return 0; }
