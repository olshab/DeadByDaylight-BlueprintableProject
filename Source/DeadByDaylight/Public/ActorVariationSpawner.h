#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "UObject/SoftObjectPtr.h"
#include "ActorVariationElements.h"
#include "ActorVariationSpawner.generated.h"

class AActor;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UActorVariationSpawner : public USceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<AActor> Visualization;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FActorVariationElements> Variations;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UClass* _toSpawn;

public:
	UActorVariationSpawner();
};

FORCEINLINE uint32 GetTypeHash(const UActorVariationSpawner) { return 0; }
