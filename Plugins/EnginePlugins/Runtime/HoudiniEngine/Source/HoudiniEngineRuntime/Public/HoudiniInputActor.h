#pragma once

#include "CoreMinimal.h"
#include "HoudiniInputObject.h"
#include "UObject/SoftObjectPtr.h"
#include "HoudiniInputActor.generated.h"

class UHoudiniInputSceneComponent;
class UObject;

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniInputActor : public UHoudiniInputObject
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UHoudiniInputSceneComponent*> ActorComponents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<TSoftObjectPtr<UObject>> ActorSceneComponents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 LastUpdateNumComponentsAdded;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 LastUpdateNumComponentsRemoved;

public:
	UHoudiniInputActor();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniInputActor) { return 0; }
