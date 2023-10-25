#pragma once

#include "CoreMinimal.h"
#include "AkAudioType.h"
#include "AkFolder.generated.h"

UCLASS(Blueprintable)
class AKAUDIO_API UAkFolder : public UAkAudioType
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString UnrealFolderPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString WwiseFolderPath;

public:
	UAkFolder();
};

FORCEINLINE uint32 GetTypeHash(const UAkFolder) { return 0; }
