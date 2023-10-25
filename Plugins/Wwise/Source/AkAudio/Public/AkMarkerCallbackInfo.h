#pragma once

#include "CoreMinimal.h"
#include "AkEventCallbackInfo.h"
#include "AkMarkerCallbackInfo.generated.h"

UCLASS(Blueprintable)
class UAkMarkerCallbackInfo : public UAkEventCallbackInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Identifier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Position;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Label;

public:
	UAkMarkerCallbackInfo();
};

FORCEINLINE uint32 GetTypeHash(const UAkMarkerCallbackInfo) { return 0; }
