#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "PerformanceAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FPerformanceAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AverageFPS;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinFPS;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxFPS;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AverageFrameTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinFrameTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxFrameTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StandardDeviationFrameTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PercentBelow60msFrameTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PercentBelow47msFrameTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PercentBelow34msFrameTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PercentBelow17msFrameTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PercentHitchesFrameTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AverageRenderThreadTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinRenderThreadTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxRenderThreadTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StandardDeviationRenderThreadTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PercentBelow60msRenderThreadTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PercentBelow47msRenderThreadTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PercentBelow34msRenderThreadTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PercentBelow17msRenderThreadTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PercentHitchesRenderThreadTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AverageGameThreadTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinGameThreadTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxGameThreadTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StandardDeviationGameThreadTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PercentBelow60msGameThreadTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PercentBelow47msGameThreadTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PercentBelow34msGameThreadTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PercentBelow17msGameThreadTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PercentHitchesGameThreadTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AverageRhiThreadTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinRhiThreadTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxRhiThreadTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StandardDeviationRhiThreadTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PercentBelow60msRhiThreadTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PercentBelow47msRhiThreadTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PercentBelow34msRhiThreadTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PercentBelow17msRhiThreadTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PercentHitchesRhiThreadTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AverageGpuTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinGpuTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxGpuTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StandardDeviationGpuTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PercentBelow60msGpuTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PercentBelow47msGpuTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PercentBelow34msGpuTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PercentBelow17msGpuTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PercentHitchesGpuTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AverageSlateTickTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AverageSlateRenderThreadTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AverageSlateDrawWindowTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AdaptiveShadowMapAverageNumShadowPrimitivesPerCapture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AdaptiveShadowMapAverageActiveLightsPerFrame;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AdaptiveShadowMapPercentageOfFrameCapturingTiles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HitchesPerMinute50ms;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HitchesPerMinute100ms;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HitchesPerMinute200ms;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HitchesPerMinute400ms;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HitchesPerMinute800ms;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HitchesPerMinute1600ms;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HitchesPerMinute3200ms;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HitchesPerMinute6400ms;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HitchesPerMinute12800ms;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AverageInputLatency;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinInputLatency;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxInputLatency;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AverageOutputLatency;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinOutputLatency;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxOutputLatency;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AverageStandardDeviation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinStandardDeviation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxStandardDeviation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString DeviceProfile;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxMemoryUsedKilobytes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AveragePing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinPing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxPing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 DynamicResolutionScreenPercentageAvg;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 DynamicResolutionScreenPercentageMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 DynamicResolutionScreenPercentageMin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MatchCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TotalFrames;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ResolutionQuality;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ViewDistanceQuality;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 AntiAliasingQuality;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 AntiAliasingMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FrameCap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool isVsyncEnable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ShadowQuality;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TextureQuality;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 EffectsQuality;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 FoliageQuality;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Scenario;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Theme;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MapName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TileListCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Seed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString CharacterName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Cpu;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString GpuAdapter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MatchId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString RHIName;

public:
	DBDANALYTICS_API FPerformanceAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FPerformanceAnalytics) { return 0; }
