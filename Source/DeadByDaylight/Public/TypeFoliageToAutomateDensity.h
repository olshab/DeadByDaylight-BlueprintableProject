#pragma once

#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "UObject/SoftObjectPtr.h"
#include "Components/SceneComponent.h"
#include "TypeFoliageToAutomateDensity.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FTypeFoliageToAutomateDensity
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UStaticMesh> SourceMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UStaticMesh> ReplacementMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bGenerateOverlaps;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bReceiveDecals;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ECanBeCharacterBase> bCanCharacterStepOn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EDetailMode> DetailMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinimumFoliageRadius;

public:
	DEADBYDAYLIGHT_API FTypeFoliageToAutomateDensity();
};

FORCEINLINE uint32 GetTypeHash(const FTypeFoliageToAutomateDensity) { return 0; }
