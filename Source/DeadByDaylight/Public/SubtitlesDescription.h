#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "UObject/SoftObjectPtr.h"
#include "SubtitlesDescription.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FSubtitlesDescription: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText SubtitlesText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UAkAudioEvent> AudioEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<float> durationOverride;

public:
	DEADBYDAYLIGHT_API FSubtitlesDescription();
};

FORCEINLINE uint32 GetTypeHash(const FSubtitlesDescription) { return 0; }
