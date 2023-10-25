#pragma once

#include "CoreMinimal.h"
#include "Dependency.h"
#include "UObject/SoftObjectPtr.h"
#include "BuiltLevelData.generated.h"

class UAkAudioBank;

USTRUCT(BlueprintType)
struct FBuiltLevelData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ThemeName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ThemeWeather;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName AudioStateThemes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName AudioStateWeather;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName AudioThemeEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName AudioLimitPointEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UAkAudioBank> AudioThemeSoundBank;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MapName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TileCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FDependency> Dependencies;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName SpecialEventId;

public:
	DEADBYDAYLIGHT_API FBuiltLevelData();
};

FORCEINLINE uint32 GetTypeHash(const FBuiltLevelData) { return 0; }
