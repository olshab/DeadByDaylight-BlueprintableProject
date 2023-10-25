#pragma once

#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "SpecialEventLoadingScreen.generated.h"

UCLASS(Blueprintable)
class USpecialEventLoadingScreen : public UScreenBase
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void OnLoadingTextTimerComplete() const;

public:
	USpecialEventLoadingScreen();
};

FORCEINLINE uint32 GetTypeHash(const USpecialEventLoadingScreen) { return 0; }
