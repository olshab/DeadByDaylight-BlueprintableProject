#pragma once

#include "CoreMinimal.h"
#include "SavedReleaseDataV8.generated.h"

USTRUCT(BlueprintType)
struct FSavedReleaseDataV8
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	FString Version;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame)
	bool NewChapterPopupSeen;

public:
	DEADBYDAYLIGHT_API FSavedReleaseDataV8();
};

FORCEINLINE uint32 GetTypeHash(const FSavedReleaseDataV8) { return 0; }
