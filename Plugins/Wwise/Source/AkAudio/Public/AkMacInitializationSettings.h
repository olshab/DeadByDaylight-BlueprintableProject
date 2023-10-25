#pragma once

#include "CoreMinimal.h"
#include "AkPlatformInitialisationSettingsBase.h"
#include "UObject/NoExportTypes.h"
#include "AkCommonInitializationSettingsWithSampleRate.h"
#include "AkCommunicationSettingsWithSystemInitialization.h"
#include "AkAdvancedInitializationSettingsWithMultiCoreRendering.h"
#include "AkMacInitializationSettings.generated.h"

UCLASS(Blueprintable)
class AKAUDIO_API UAkMacInitializationSettings : public UObject, public IAkPlatformInitialisationSettingsBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAkCommonInitializationSettingsWithSampleRate CommonSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;

public:
	UFUNCTION(BlueprintCallable)
	void MigrateMultiCoreRendering(bool NewValue);

public:
	UAkMacInitializationSettings();
};

FORCEINLINE uint32 GetTypeHash(const UAkMacInitializationSettings) { return 0; }
