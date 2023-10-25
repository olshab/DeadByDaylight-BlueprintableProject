#pragma once

#include "CoreMinimal.h"
#include "AkPlatformInitialisationSettingsBase.h"
#include "AkAudioSession.h"
#include "AkAdvancedInitializationSettings.h"
#include "UObject/NoExportTypes.h"
#include "AkCommonInitializationSettingsWithSampleRate.h"
#include "AkCommunicationSettingsWithSystemInitialization.h"
#include "AkIOSInitializationSettings.generated.h"

UCLASS(Blueprintable)
class AKAUDIO_API UAkIOSInitializationSettings : public UObject, public IAkPlatformInitialisationSettingsBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAkCommonInitializationSettingsWithSampleRate CommonSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAkAudioSession AudioSession;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAkAdvancedInitializationSettings AdvancedSettings;

public:
	UAkIOSInitializationSettings();
};

FORCEINLINE uint32 GetTypeHash(const UAkIOSInitializationSettings) { return 0; }
