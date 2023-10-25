#pragma once

#include "CoreMinimal.h"
#include "AkEventWithSubtitle.h"
#include "UObject/NoExportTypes.h"
#include "CommentatorAudioContext.generated.h"

USTRUCT(BlueprintType)
struct FCommentatorAudioContext
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FAkEventWithSubtitle> AudioEvents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PlayProbability;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FInt32Range Delay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 NumMatchesBeforeContextRepeat;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 NumOccurencesBeforeEventRepeat;

public:
	DEADBYDAYLIGHT_API FCommentatorAudioContext();
};

FORCEINLINE uint32 GetTypeHash(const FCommentatorAudioContext) { return 0; }
