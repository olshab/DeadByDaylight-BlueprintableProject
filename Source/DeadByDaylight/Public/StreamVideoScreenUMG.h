#pragma once

#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "StreamVideoScreenUMG.generated.h"

class UStreamVideoManager;

UCLASS(Blueprintable)
class UStreamVideoScreenUMG : public UScreenBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UStreamVideoManager* _streamVideoManager;

private:
	UFUNCTION(BlueprintCallable)
	void OnCloseTriggered();

public:
	UStreamVideoScreenUMG();
};

FORCEINLINE uint32 GetTypeHash(const UStreamVideoScreenUMG) { return 0; }
