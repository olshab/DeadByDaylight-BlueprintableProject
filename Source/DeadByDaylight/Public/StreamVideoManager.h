#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StreamVideoManager.generated.h"

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UStreamVideoManager : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void OnStreamVideoDone();

public:
	UStreamVideoManager();
};

FORCEINLINE uint32 GetTypeHash(const UStreamVideoManager) { return 0; }
