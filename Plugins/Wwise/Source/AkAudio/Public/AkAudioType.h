#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AkAudioType.generated.h"

UCLASS(Blueprintable)
class AKAUDIO_API UAkAudioType : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, AssetRegistrySearchable)
	uint32 ShortID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UObject*> UserData;

public:
	UAkAudioType();
};

FORCEINLINE uint32 GetTypeHash(const UAkAudioType) { return 0; }
