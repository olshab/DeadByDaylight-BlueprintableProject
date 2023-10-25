#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "EnvironmentAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FEnvironmentAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Environment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Endpoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Language;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString SelectedCountry;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Timezone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString DeviceProfile;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString GpuAdapter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString GpuProviderName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString GpuDriverVersion;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString RHIName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Cpu;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 QualitySetting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsFullScreen;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 FullscreenMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsAutomaticResolution;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ScreenResolutionSetting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 EngineResolutionX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 EngineResolutionY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Provider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Device;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString OperatingSystem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsPlayingUsingStreaming;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString StreamingService;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString StreamingServerLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString KrakenVersion;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ContentVersion;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsUsingKeyboard;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ControllerType;

public:
	DBDANALYTICS_API FEnvironmentAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FEnvironmentAnalytics) { return 0; }
