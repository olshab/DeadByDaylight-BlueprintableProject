#pragma once

#include "CoreMinimal.h"
#include "EAudioCustomizationCategory.h"
#include "CustomSoundFXData.generated.h"

USTRUCT(BlueprintType)
struct FCustomSoundFXData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAudioCustomizationCategory AudioCategory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString SwitchState;

public:
	DEADBYDAYLIGHT_API FCustomSoundFXData();
};

FORCEINLINE uint32 GetTypeHash(const FCustomSoundFXData) { return 0; }
