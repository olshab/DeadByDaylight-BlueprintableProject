#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "AkSettingsPerUser.generated.h"

UCLASS(Blueprintable)
class AKAUDIO_API UAkSettingsPerUser : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDirectoryPath WwiseWindowsInstallationPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FFilePath WwiseMacInstallationPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool EnableAutomaticAssetSynchronization;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString WaapiIPAddress;

	UPROPERTY(EditAnywhere)
	uint32 WaapiPort;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bAutoConnectToWAAPI;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AutoSyncSelection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool SoundDataGenerationSkipLanguage;

public:
	UAkSettingsPerUser();
};

FORCEINLINE uint32 GetTypeHash(const UAkSettingsPerUser) { return 0; }
