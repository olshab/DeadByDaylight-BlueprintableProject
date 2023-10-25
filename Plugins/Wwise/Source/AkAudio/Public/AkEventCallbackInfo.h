#pragma once

#include "CoreMinimal.h"
#include "AkCallbackInfo.h"
#include "AkEventCallbackInfo.generated.h"

UCLASS(Blueprintable)
class AKAUDIO_API UAkEventCallbackInfo : public UAkCallbackInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 PlayingID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 EventID;

public:
	UAkEventCallbackInfo();
};

FORCEINLINE uint32 GetTypeHash(const UAkEventCallbackInfo) { return 0; }
