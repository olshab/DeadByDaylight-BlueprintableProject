#pragma once

#include "CoreMinimal.h"
#include "StoryLevel.h"
#include "ArchivesMapFromS3.generated.h"

USTRUCT(BlueprintType)
struct FArchivesMapFromS3
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FStoryLevel> Level;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString RiftId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool RiftId_IsSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString SpecialEventId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool SpecialEventId_IsSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool NewTomePopup;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SkipSerialization)
	bool NewTomePopup_IsSet;

public:
	DEADBYDAYLIGHT_API FArchivesMapFromS3();
};

FORCEINLINE uint32 GetTypeHash(const FArchivesMapFromS3) { return 0; }
