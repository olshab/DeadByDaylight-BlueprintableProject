#pragma once

#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "DailyRitualsScreen.generated.h"

UCLASS(Blueprintable)
class UDailyRitualsScreen : public UScreenBase
{
	GENERATED_BODY()

private:
	UFUNCTION(BlueprintCallable)
	void OnRemoveRitual(const FString& id);

	UFUNCTION(BlueprintCallable)
	void OnClosed();

	UFUNCTION(BlueprintCallable)
	void OnClaimRitual(const FString& id);

	UFUNCTION(BlueprintCallable)
	void OnClaimAllRituals();

public:
	UDailyRitualsScreen();
};

FORCEINLINE uint32 GetTypeHash(const UDailyRitualsScreen) { return 0; }
