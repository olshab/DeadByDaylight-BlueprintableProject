#pragma once

#include "CoreMinimal.h"
#include "AkAssetBase.h"
#include "UObject/SoftObjectPtr.h"
#include "AkAudioBank.generated.h"

class UAkAssetPlatformData;
class UAkAudioEvent;

UCLASS(Blueprintable)
class AKAUDIO_API UAkAudioBank : public UAkAssetBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AutoLoad;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, UAkAssetPlatformData*> LocalizedPlatformAssetDataMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TSet<TSoftObjectPtr<UAkAudioEvent>> LinkedAkEvents;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UAkAssetPlatformData* CurrentLocalizedPlatformAssetData;

public:
	UAkAudioBank();
};

FORCEINLINE uint32 GetTypeHash(const UAkAudioBank) { return 0; }
