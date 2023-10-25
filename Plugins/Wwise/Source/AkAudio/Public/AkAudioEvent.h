#pragma once

#include "CoreMinimal.h"
#include "AkAssetBase.h"
#include "AkAudioEvent.generated.h"

class UAkAssetPlatformData;
class UAkAudioBank;

UCLASS(Blueprintable)
class AKAUDIO_API UAkAudioEvent : public UAkAssetBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, UAkAssetPlatformData*> LocalizedPlatformAssetDataMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioBank* RequiredBank;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UAkAssetPlatformData* CurrentLocalizedPlatformData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float MaxAttenuationRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool IsInfinite;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float MinimumDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float MaximumDuration;

public:
	UFUNCTION(BlueprintPure)
	float GetMinimumDuration() const;

	UFUNCTION(BlueprintPure)
	float GetMaximumDuration() const;

	UFUNCTION(BlueprintPure)
	float GetMaxAttenuationRadius() const;

	UFUNCTION(BlueprintPure)
	bool GetIsInfinite() const;

public:
	UAkAudioEvent();
};

FORCEINLINE uint32 GetTypeHash(const UAkAudioEvent) { return 0; }
