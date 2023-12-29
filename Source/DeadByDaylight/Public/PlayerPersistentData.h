#pragma once

#include "CoreMinimal.h"
#include "EProviderFlag.h"
#include "EPlayerRole.h"
#include "PlayerLoadoutData.h"
#include "PlayerSavedProfileData.h"
#include "EPlatformFlag.h"
#include "PlayerPersistentData.generated.h"

USTRUCT(BlueprintType)
struct FPlayerPersistentData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPlayerRole GameRole;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FPlayerLoadoutData StartingLoadout;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FPlayerLoadoutData CurrentLoadout;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FPlayerSavedProfileData SavedData;

	UPROPERTY(EditAnywhere)
	EPlatformFlag PlayerPlatform;

	UPROPERTY(EditAnywhere)
	EProviderFlag PlayerProvider;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FString _equippedBanner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FString _equippedBadge;

public:
	DEADBYDAYLIGHT_API FPlayerPersistentData();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerPersistentData) { return 0; }
