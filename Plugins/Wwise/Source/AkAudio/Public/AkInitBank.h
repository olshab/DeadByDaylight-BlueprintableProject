#pragma once

#include "CoreMinimal.h"
#include "AkAssetBase.h"
#include "AkInitBank.generated.h"

UCLASS(Blueprintable)
class AKAUDIO_API UAkInitBank : public UAkAssetBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> AvailableAudioCultures;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString DefaultLanguage;

public:
	UAkInitBank();
};

FORCEINLINE uint32 GetTypeHash(const UAkInitBank) { return 0; }
