#pragma once

#include "CoreMinimal.h"
#include "AkXboxOneAdvancedInitializationSettings.h"
#include "AkCommunicationSettingsWithSystemInitialization.h"
#include "AkXboxOneApuHeapInitializationSettings.h"
#include "AkPlatformInitialisationSettingsBase.h"
#include "UObject/NoExportTypes.h"
#include "AkCommonInitializationSettings.h"
#include "AkXboxOneInitializationSettings.generated.h"

UCLASS(Blueprintable)
class AKAUDIO_API UAkXboxOneInitializationSettings : public UObject, public IAkPlatformInitialisationSettingsBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAkCommonInitializationSettings CommonSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAkXboxOneApuHeapInitializationSettings ApuHeapSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAkXboxOneAdvancedInitializationSettings AdvancedSettings;

public:
	UFUNCTION(BlueprintCallable)
	void MigrateMultiCoreRendering(bool NewValue);

public:
	UAkXboxOneInitializationSettings();
};

FORCEINLINE uint32 GetTypeHash(const UAkXboxOneInitializationSettings) { return 0; }
