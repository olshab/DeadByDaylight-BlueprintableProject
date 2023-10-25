#pragma once

#include "CoreMinimal.h"
#include "BloodOrbInfo.generated.h"

class UStaticMeshComponent;

USTRUCT(BlueprintType)
struct FBloodOrbInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export)
	UStaticMeshComponent* originalStaticMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export)
	UStaticMeshComponent* clonedStaticMesh;

public:
	THEONI_API FBloodOrbInfo();
};

FORCEINLINE uint32 GetTypeHash(const FBloodOrbInfo) { return 0; }
