#pragma once

#include "CoreMinimal.h"
#include "S3DLCAdditionalInfoEntry.generated.h"

USTRUCT(BlueprintType)
struct FS3DLCAdditionalInfoEntry
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString DlcId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString AvailableStartDate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool AvailableStartDate_IsSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString AvailableEndDate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool AvailableEndDate_IsSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsShownInGameStore;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool IsShownInGameStore_IsSet;

public:
	DEADBYDAYLIGHT_API FS3DLCAdditionalInfoEntry();
};

FORCEINLINE uint32 GetTypeHash(const FS3DLCAdditionalInfoEntry) { return 0; }
