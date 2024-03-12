#pragma once

#include "CoreMinimal.h"
#include "UIViewFlagSaveData.generated.h"

USTRUCT(BlueprintType)
struct FUIViewFlagSaveData
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta=(AllowPrivateAccess=true))
	TMap<FString, bool> CharactersFirstBloodweb;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta=(AllowPrivateAccess=true))
	bool BloodwebCenterButtonUnlocked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta=(AllowPrivateAccess=true))
	TMap<FString, bool> ArchiveStoryHasBeenSeenStatus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, meta=(AllowPrivateAccess=true))
	TMap<FString, bool> ArchiveNewTomeAnimationHasBeenSeenStatus;

public:
	DEADBYDAYLIGHT_API FUIViewFlagSaveData();
};

FORCEINLINE uint32 GetTypeHash(const FUIViewFlagSaveData) { return 0; }
