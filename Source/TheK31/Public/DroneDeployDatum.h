#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DroneDeployDatum.generated.h"

class ACharacter;

USTRUCT(BlueprintType)
struct FDroneDeployDatum
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector Location;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator Rotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 DeployCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ACharacter* DeployingCharacter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool HasReachedDeployLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsDeployed;

public:
	THEK31_API FDroneDeployDatum();
};

FORCEINLINE uint32 GetTypeHash(const FDroneDeployDatum) { return 0; }
