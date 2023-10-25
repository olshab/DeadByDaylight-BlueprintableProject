#pragma once

#include "CoreMinimal.h"
#include "AkAdvancedInitializationSettingsWithMultiCoreRendering.h"
#include "AkXboxOneGDKAdvancedInitializationSettings.generated.h"

USTRUCT(BlueprintType)
struct FAkXboxOneGDKAdvancedInitializationSettings: public FAkAdvancedInitializationSettingsWithMultiCoreRendering
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	uint16 MaximumNumberOfXMAVoices;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UseHardwareCodecLowLatencyMode;

public:
	AKAUDIO_API FAkXboxOneGDKAdvancedInitializationSettings();
};

FORCEINLINE uint32 GetTypeHash(const FAkXboxOneGDKAdvancedInitializationSettings) { return 0; }
