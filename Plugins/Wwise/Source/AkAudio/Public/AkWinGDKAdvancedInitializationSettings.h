#pragma once

#include "CoreMinimal.h"
#include "AkAdvancedInitializationSettingsWithMultiCoreRendering.h"
#include "AkWinGDKAdvancedInitializationSettings.generated.h"

USTRUCT(BlueprintType)
struct FAkWinGDKAdvancedInitializationSettings: public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UseHeadMountedDisplayAudioDevice;

	UPROPERTY(EditAnywhere)
	uint32 uMaxSystemAudioObjects;

public:
	AKAUDIO_API FAkWinGDKAdvancedInitializationSettings();
};

FORCEINLINE uint32 GetTypeHash(const FAkWinGDKAdvancedInitializationSettings) { return 0; }
