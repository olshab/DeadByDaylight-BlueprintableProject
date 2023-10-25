#pragma once

#include "CoreMinimal.h"
#include "BankTrackingDataV2.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SoundBankLoader.generated.h"

class ULoadAsyncBankData;
class UAkAudioBank;

UCLASS(Blueprintable)
class DBDAUDIO_API USoundBankLoader : public UGameInstanceSubsystem
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<UAkAudioBank*> _audioBanks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ULoadAsyncBankData*> _asyncAudioBanksPendingLoadData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<FString, FBankTrackingDataV2> _audioBanksV2;

public:
	USoundBankLoader();
};

FORCEINLINE uint32 GetTypeHash(const USoundBankLoader) { return 0; }
