#pragma once

#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "ArchiveWidgetScreen.generated.h"

UCLASS(Blueprintable)
class UArchiveWidgetScreen : public UScreenBase
{
	GENERATED_BODY()

private:
	UFUNCTION(BlueprintCallable)
	void OnRewardsButtonClick();

	UFUNCTION(BlueprintCallable)
	void OnQuestsButtonClick();

public:
	UArchiveWidgetScreen();
};

FORCEINLINE uint32 GetTypeHash(const UArchiveWidgetScreen) { return 0; }
