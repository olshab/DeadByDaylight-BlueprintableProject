#pragma once

#include "CoreMinimal.h"
#include "AkEventCallbackInfo.h"
#include "AkDurationCallbackInfo.generated.h"

UCLASS(Blueprintable)
class UAkDurationCallbackInfo : public UAkEventCallbackInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Duration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float EstimatedDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 AudioNodeID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MediaID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bStreaming;

public:
	UAkDurationCallbackInfo();
};

FORCEINLINE uint32 GetTypeHash(const UAkDurationCallbackInfo) { return 0; }
