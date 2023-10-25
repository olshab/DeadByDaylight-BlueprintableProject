#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "ArchiveVignetteEntryAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FArchiveVignetteEntryAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ArchiveId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString VignetteId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 EntryId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString SelectEntryTimestamp;

	UPROPERTY(EditAnywhere)
	double EntryTimeSpent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsTaggedAsNew;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool HasVoiceOver;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool StartWithAutoplayEnable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsAutoplayEnableWhenDeselectingEntry;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString StartVoiceoverTimestamp;

	UPROPERTY(EditAnywhere)
	double VoiceoverLongestTimeSpent;

public:
	DBDANALYTICS_API FArchiveVignetteEntryAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FArchiveVignetteEntryAnalytics) { return 0; }
