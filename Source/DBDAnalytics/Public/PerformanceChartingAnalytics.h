#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "PerformanceChartingAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FPerformanceChartingAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString scenario;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString theme;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString map_name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 tile_spawn_count;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 seed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString match_id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString character_name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString cpu_name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString gpu_name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString resolution;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 graphics_quality_level;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString hitch_times;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float target_30_fps;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float target_60_fps;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float target_120_fps;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float measured_perf_time;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float mvp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float avg_fps;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float hitches_per_minute;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float avg_hitch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float frame_time_avg;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float frame_time_max;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float frame_time_min;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float game_thread_avg;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float game_thread_hitches_per_min;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float game_thread_bound_frames;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float render_thread_avg;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float render_thread_hitches_per_min;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float render_thread_bound_frames;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float rhi_thread_avg;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float rhi_thread_hitches_per_min;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float rhi_thread_bound_frames;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float gpu_avg;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float gpu_hitches_per_min;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float gpu_bound_frames;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float draw_calls_avg;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float draw_calls_max;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float draw_calls_min;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float drawn_prims_avg;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float drawn_prims_max;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float drawn_prims_min;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float cpu_memory_peak;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float cpu_memory_used;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float streaming_memory_peak;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float streaming_memory_used;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float physical_memory_peak;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float physical_memory_used;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString texturegroups_guid;

public:
	DBDANALYTICS_API FPerformanceChartingAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FPerformanceChartingAnalytics) { return 0; }
