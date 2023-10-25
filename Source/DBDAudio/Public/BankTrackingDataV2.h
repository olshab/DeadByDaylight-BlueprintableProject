#pragma once

#include "CoreMinimal.h"
#include "OnAkBankCallback.h"
#include "BankTrackingDataV2.generated.h"

class UAkAudioBank;

USTRUCT(BlueprintType)
struct FBankTrackingDataV2
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UAkAudioBank* Bank;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FOnAkBankCallback> OnLoadedCallbacks;

public:
	DBDAUDIO_API FBankTrackingDataV2();
};

FORCEINLINE uint32 GetTypeHash(const FBankTrackingDataV2) { return 0; }
