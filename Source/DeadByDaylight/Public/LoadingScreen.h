#pragma once

#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "LoadingScreen.generated.h"

UCLASS(Blueprintable)
class ULoadingScreen : public UScreenBase
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void OnLoadingTextTimerComplete() const;

public:
	ULoadingScreen();
};

FORCEINLINE uint32 GetTypeHash(const ULoadingScreen) { return 0; }
