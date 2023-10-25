#pragma once

#include "CoreMinimal.h"
#include "AkPlatformInitialisationSettingsBase.h"
#include "AkXboxOneGDKApuHeapInitializationSettings.h"
#include "AkCommunicationSettingsWithSystemInitialization.h"
#include "AkXboxOneGDKAdvancedInitializationSettings.h"
#include "UObject/NoExportTypes.h"
#include "AkCommonInitializationSettings.h"
#include "AkXboxOneGDKInitializationSettings.generated.h"

UCLASS(Blueprintable)
class AKAUDIO_API UAkXboxOneGDKInitializationSettings : public UObject, public IAkPlatformInitialisationSettingsBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAkCommonInitializationSettings CommonSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAkXboxOneGDKApuHeapInitializationSettings ApuHeapSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAkXboxOneGDKAdvancedInitializationSettings AdvancedSettings;

public:
	UFUNCTION(BlueprintCallable)
	void MigrateMultiCoreRendering(bool NewValue);

public:
	UAkXboxOneGDKInitializationSettings();
};

FORCEINLINE uint32 GetTypeHash(const UAkXboxOneGDKInitializationSettings) { return 0; }
