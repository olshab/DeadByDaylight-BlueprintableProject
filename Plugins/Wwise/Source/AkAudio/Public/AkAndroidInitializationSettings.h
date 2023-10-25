#pragma once

#include "CoreMinimal.h"
#include "AkPlatformInitialisationSettingsBase.h"
#include "UObject/NoExportTypes.h"
#include "AkCommunicationSettingsWithSystemInitialization.h"
#include "AkAndroidAdvancedInitializationSettings.h"
#include "AkCommonInitializationSettingsWithSampleRate.h"
#include "AkAndroidInitializationSettings.generated.h"

UCLASS(Blueprintable)
class AKAUDIO_API UAkAndroidInitializationSettings : public UObject, public IAkPlatformInitialisationSettingsBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAkCommonInitializationSettingsWithSampleRate CommonSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAkAndroidAdvancedInitializationSettings AdvancedSettings;

public:
	UFUNCTION(BlueprintCallable)
	void MigrateMultiCoreRendering(bool NewValue);

public:
	UAkAndroidInitializationSettings();
};

FORCEINLINE uint32 GetTypeHash(const UAkAndroidInitializationSettings) { return 0; }
