#pragma once

#include "CoreMinimal.h"
#include "ContentScheduleRecord.generated.h"

USTRUCT(BlueprintType)
struct FContentScheduleRecord
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Priority;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool Description_IsSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> GameModes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool GameModes_IsSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString LinkedEventId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool LinkedEventId_IsSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, float> MapsThemeWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool MapsThemeWeight_IsSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, float> MapsWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool MapsWeight_IsSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> FeaturedMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool FeaturedMap_IsSet;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FString StartDate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization, meta=(AllowPrivateAccess=true))
	bool StartDate_IsSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FString EndDate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization, meta=(AllowPrivateAccess=true))
	bool EndDate_IsSet;

public:
	DEADBYDAYLIGHT_API FContentScheduleRecord();
};

FORCEINLINE uint32 GetTypeHash(const FContentScheduleRecord) { return 0; }
