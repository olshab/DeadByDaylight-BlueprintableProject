#pragma once

#include "CoreMinimal.h"
#include "EquippedPlayerCustomization.h"
#include "PlayerSavedProfileDataShared.generated.h"

USTRUCT(BlueprintType)
struct FPlayerSavedProfileDataShared
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString PlayerName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SelectedCamperIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SelectedSlasherIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FEquippedPlayerCustomization SelectedCharacterCustomization;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 CamperStreak;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ShowPortraitBorder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool HasActiveSubscription;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString PlatformId;

public:
	DEADBYDAYLIGHT_API FPlayerSavedProfileDataShared();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerSavedProfileDataShared) { return 0; }
