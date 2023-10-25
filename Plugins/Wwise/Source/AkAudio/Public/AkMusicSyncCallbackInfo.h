#pragma once

#include "CoreMinimal.h"
#include "AkSegmentInfo.h"
#include "AkCallbackInfo.h"
#include "EAkCallbackType.h"
#include "AkMusicSyncCallbackInfo.generated.h"

UCLASS(Blueprintable)
class UAkMusicSyncCallbackInfo : public UAkCallbackInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PlayingID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAkSegmentInfo SegmentInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAkCallbackType MusicSyncType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString UserCueName;

public:
	UAkMusicSyncCallbackInfo();
};

FORCEINLINE uint32 GetTypeHash(const UAkMusicSyncCallbackInfo) { return 0; }
