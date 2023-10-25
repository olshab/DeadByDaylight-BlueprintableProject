#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "UObject/SoftObjectPtr.h"
#include "FakePalletData.generated.h"

class APalletTracker;
class APallet;
class UStaticMesh;

USTRUCT(BlueprintType)
struct FFakePalletData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<APallet> LevelPalletBP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<APallet> DreamPalletBP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<APalletTracker> PalletTrackerBP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UStaticMesh> IllusionaryPalletStaticMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ID;

public:
	DEADBYDAYLIGHT_API FFakePalletData();
};

FORCEINLINE uint32 GetTypeHash(const FFakePalletData) { return 0; }
