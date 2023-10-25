#pragma once

#include "CoreMinimal.h"
#include "AkPlatformInitialisationSettingsBase.h"
#include "AkCommunicationSettingsWithSystemInitialization.h"
#include "AkXSXAdvancedInitializationSettings.h"
#include "AkXSXApuHeapInitializationSettings.h"
#include "UObject/NoExportTypes.h"
#include "AkCommonInitializationSettings.h"
#include "AkXSXInitializationSettings.generated.h"

UCLASS(Blueprintable)
class AKAUDIO_API UAkXSXInitializationSettings : public UObject, public IAkPlatformInitialisationSettingsBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAkCommonInitializationSettings CommonSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAkXSXApuHeapInitializationSettings ApuHeapSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAkXSXAdvancedInitializationSettings AdvancedSettings;

public:
	UFUNCTION(BlueprintCallable)
	void MigrateMultiCoreRendering(bool NewValue);

public:
	UAkXSXInitializationSettings();
};

FORCEINLINE uint32 GetTypeHash(const UAkXSXInitializationSettings) { return 0; }
