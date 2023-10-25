#pragma once

#include "CoreMinimal.h"
#include "AkPS4AdvancedInitializationSettings.h"
#include "AkPlatformInitialisationSettingsBase.h"
#include "UObject/NoExportTypes.h"
#include "AkCommunicationSettingsWithSystemInitialization.h"
#include "AkCommonInitializationSettings.h"
#include "AkPS4InitializationSettings.generated.h"

UCLASS(Blueprintable)
class AKAUDIO_API UAkPS4InitializationSettings : public UObject, public IAkPlatformInitialisationSettingsBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAkCommonInitializationSettings CommonSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAkPS4AdvancedInitializationSettings AdvancedSettings;

public:
	UFUNCTION(BlueprintCallable)
	void MigrateMultiCoreRendering(bool NewValue);

public:
	UAkPS4InitializationSettings();
};

FORCEINLINE uint32 GetTypeHash(const UAkPS4InitializationSettings) { return 0; }
