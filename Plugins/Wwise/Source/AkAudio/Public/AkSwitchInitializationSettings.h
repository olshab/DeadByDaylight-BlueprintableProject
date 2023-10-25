#pragma once

#include "CoreMinimal.h"
#include "AkPlatformInitialisationSettingsBase.h"
#include "UObject/NoExportTypes.h"
#include "AkCommonInitializationSettingsWithSampleRate.h"
#include "AkAdvancedInitializationSettingsWithMultiCoreRendering.h"
#include "AkCommunicationSettingsWithCommSelection.h"
#include "AkSwitchInitializationSettings.generated.h"

UCLASS(Blueprintable)
class AKAUDIO_API UAkSwitchInitializationSettings : public UObject, public IAkPlatformInitialisationSettingsBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAkCommonInitializationSettingsWithSampleRate CommonSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAkCommunicationSettingsWithCommSelection CommunicationSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;

public:
	UFUNCTION(BlueprintCallable)
	void MigrateMultiCoreRendering(bool NewValue);

public:
	UAkSwitchInitializationSettings();
};

FORCEINLINE uint32 GetTypeHash(const UAkSwitchInitializationSettings) { return 0; }
