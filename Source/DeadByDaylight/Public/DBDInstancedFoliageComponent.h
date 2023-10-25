#pragma once

#include "CoreMinimal.h"
#include "DBDFoliageInfo.h"
#include "Components/ActorComponent.h"
#include "DBDInstancedFoliageComponent.generated.h"

class USceneComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDBDInstancedFoliageComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NextBaseId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TMap<int32, USceneComponent*> InstanceBaseMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FDBDFoliageInfo> foliage;

public:
	UDBDInstancedFoliageComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDBDInstancedFoliageComponent) { return 0; }
