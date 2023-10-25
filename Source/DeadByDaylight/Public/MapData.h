#pragma once

#include "CoreMinimal.h"
#include "TileProperties.h"
#include "UObject/SoftObjectPtr.h"
#include "Engine/DataAsset.h"
#include "MapData.generated.h"

class UProceduralGenerationData;
class UAkAudioBank;
class UBlackboardData;

UCLASS(Blueprintable)
class UMapData : public UDataAsset
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
	int32 MapWidth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MapHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Draft;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FTileProperties> MapTileProperties;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UBlackboardData* Blackboard;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Gesture;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UProceduralGenerationData* _proceduralGenerationData;

public:
	UMapData();
};

FORCEINLINE uint32 GetTypeHash(const UMapData) { return 0; }
