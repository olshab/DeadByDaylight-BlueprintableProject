#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ActorSpawner.h"
#include "EventSpawnablePositionDropdown.h"
#include "DataTableDropdown.h"
#include "EventSpawner.generated.h"

class UBoxComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UEventSpawner : public UActorSpawner
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FEventSpawnablePositionDropdown EventSpawnablePosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDataTableDropdown EventSpawnableShapePreset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector MinBoundOverride;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector MaxBoundOverride;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UBoxComponent* _minBoundBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UBoxComponent* _maxBoundBox;

public:
	UEventSpawner();
};

FORCEINLINE uint32 GetTypeHash(const UEventSpawner) { return 0; }
