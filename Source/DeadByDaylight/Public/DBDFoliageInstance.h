#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DBDFoliageInstance.generated.h"

USTRUCT(BlueprintType)
struct FDBDFoliageInstance
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 BaseId;

	UPROPERTY(EditAnywhere)
	FGuid ProceduralGuid;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector Location;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator Rotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator PreAlignRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector DrawScale3D;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ZOffset;

	UPROPERTY(EditAnywhere)
	uint32 Flags;

public:
	DEADBYDAYLIGHT_API FDBDFoliageInstance();
};

FORCEINLINE uint32 GetTypeHash(const FDBDFoliageInstance) { return 0; }
