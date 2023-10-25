#pragma once

#include "CoreMinimal.h"
#include "AkCommonInitializationSettingsWithSampleRate.h"
#include "AkWindowsAdvancedInitializationSettings.h"
#include "AkPlatformInitialisationSettingsBase.h"
#include "UObject/NoExportTypes.h"
#include "AkCommunicationSettingsWithSystemInitialization.h"
#include "AkWindowsInitializationSettings.generated.h"

UCLASS(Blueprintable)
class AKAUDIO_API UAkWindowsInitializationSettings : public UObject, public IAkPlatformInitialisationSettingsBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAkCommonInitializationSettingsWithSampleRate CommonSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAkWindowsAdvancedInitializationSettings AdvancedSettings;

public:
	UFUNCTION(BlueprintCallable)
	void MigrateMultiCoreRendering(bool NewValue);

public:
	UAkWindowsInitializationSettings();
};

FORCEINLINE uint32 GetTypeHash(const UAkWindowsInitializationSettings) { return 0; }
