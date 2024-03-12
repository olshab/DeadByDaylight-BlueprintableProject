#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "MysteryBoxSubsystem.generated.h"

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UMysteryBoxSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

private:
	UFUNCTION(BlueprintCallable)
	void OnTimeTravel(bool success, const FString& date);

	UFUNCTION(BlueprintCallable)
	void OnNextClaimTimeTimerElapsed(const FString& campaign);

	UFUNCTION(BlueprintCallable)
	void OnGameInstanceInitialized();

public:
	UMysteryBoxSubsystem();
};

FORCEINLINE uint32 GetTypeHash(const UMysteryBoxSubsystem) { return 0; }
