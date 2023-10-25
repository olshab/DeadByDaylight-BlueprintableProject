#pragma once

#include "CoreMinimal.h"
#include "AkAdvancedInitializationSettingsWithMultiCoreRendering.h"
#include "AkPS5AdvancedInitializationSettings.generated.h"

USTRUCT(BlueprintType)
struct FAkPS5AdvancedInitializationSettings: public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UseHardwareCodecLowLatencyMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bVorbisHwAcceleration;

public:
	AKAUDIO_API FAkPS5AdvancedInitializationSettings();
};

FORCEINLINE uint32 GetTypeHash(const FAkPS5AdvancedInitializationSettings) { return 0; }
