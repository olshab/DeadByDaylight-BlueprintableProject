#pragma once

#include "CoreMinimal.h"
#include "HoudiniInputObject.h"
#include "UObject/SoftObjectPtr.h"
#include "HoudiniInputBlueprint.generated.h"

class UHoudiniInputSceneComponent;
class UObject;

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniInputBlueprint : public UHoudiniInputObject
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UHoudiniInputSceneComponent*> BPComponents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<TSoftObjectPtr<UObject>> BPSceneComponents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 LastUpdateNumComponentsAdded;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 LastUpdateNumComponentsRemoved;

public:
	UHoudiniInputBlueprint();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniInputBlueprint) { return 0; }
