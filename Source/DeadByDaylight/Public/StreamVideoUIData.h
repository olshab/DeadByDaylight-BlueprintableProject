#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "StreamVideoUIData.generated.h"

class UUMGStreamVideoWidget;
class UMediaPlayer;

USTRUCT(BlueprintType)
struct FStreamVideoUIData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString VideoURL;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString Language;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool HasAudio;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 ZOrderWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TSoftClassPtr<UUMGStreamVideoWidget> StreamVideoWidgetAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TSoftObjectPtr<UMediaPlayer> MediaPlayerAsset;

public:
	DEADBYDAYLIGHT_API FStreamVideoUIData();
};

FORCEINLINE uint32 GetTypeHash(const FStreamVideoUIData) { return 0; }
