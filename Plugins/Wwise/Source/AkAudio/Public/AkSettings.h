#pragma once

#include "CoreMinimal.h"
#include "AkGeometrySurfacePropertiesToMap.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "AkAcousticTextureParams.h"
#include "UObject/SoftObjectPtr.h"
#include "AkSettings.generated.h"

class UPhysicalMaterial;
class UAkAuxBus;
class UAkRtpc;
class UAkAudioEvent;

UCLASS(Blueprintable)
class AKAUDIO_API UAkSettings : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 MaxSimultaneousReverbVolumes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FFilePath WwiseProjectPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDirectoryPath WwiseSoundDataFolder;

	UPROPERTY()
	bool bAutoConnectToWAAPI_DEPRECATED;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ECollisionChannel> DefaultOcclusionCollisionChannel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ECollisionChannel> DefaultFitToGeometryCollisionChannel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, EditFixedSize)
	TMap<TSoftObjectPtr<UPhysicalMaterial>, FAkGeometrySurfacePropertiesToMap> AkGeometryMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float GlobalDecayAbsorption;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UAkAuxBus> DefaultReverbAuxBus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<float, TSoftObjectPtr<UAkAuxBus>> EnvironmentDecayAuxBusMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString HFDampingName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString DecayEstimateName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString TimeToFirstReflectionName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UAkRtpc> HFDampingRTPC;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UAkRtpc> DecayEstimateRTPC;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UAkRtpc> TimeToFirstReflectionRTPC;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UAkAudioEvent> AudioInputEvent;

	UPROPERTY(EditAnywhere)
	TMap<FGuid, FAkAcousticTextureParams> AcousticTextureParamsMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool SplitSwitchContainerMedia;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool SplitMediaPerFolder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UseEventBasedPackaging;

	UPROPERTY()
	bool EnableAutomaticAssetSynchronization_DEPRECATED;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString CommandletCommitMessage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, FString> UnrealCultureToWwiseCulture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AskedToUseNewAssetManagement;

	UPROPERTY()
	bool bEnableMultiCoreRendering_DEPRECATED;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool MigratedEnableMultiCoreRendering;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool FixupRedirectorsDuringMigration;

	UPROPERTY()
	FDirectoryPath WwiseWindowsInstallationPath_DEPRECATED;

	UPROPERTY()
	FFilePath WwiseMacInstallationPath_DEPRECATED;

public:
	UAkSettings();
};

FORCEINLINE uint32 GetTypeHash(const UAkSettings) { return 0; }
