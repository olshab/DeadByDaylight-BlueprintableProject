#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ArchivesRiftGenericViewData.generated.h"

USTRUCT(BlueprintType)
struct FArchivesRiftGenericViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDateTime EndDate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CurrentTier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxTier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CurrentStars;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 StarsPerTiers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool OwnPass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ShowBonusTierTooltip;

public:
	DBDUIVIEWINTERFACES_API FArchivesRiftGenericViewData();
};

FORCEINLINE uint32 GetTypeHash(const FArchivesRiftGenericViewData) { return 0; }
