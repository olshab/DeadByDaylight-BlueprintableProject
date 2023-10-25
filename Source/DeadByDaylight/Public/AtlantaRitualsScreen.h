#pragma once

#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "AtlantaRitualsScreen.generated.h"

class UUMGAtlantaRitualsScreen;

UCLASS(Blueprintable)
class UAtlantaRitualsScreen : public UScreenBase
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UUMGAtlantaRitualsScreen* _umgScreen;

private:
	UFUNCTION(BlueprintCallable)
	void OnRefreshRitual();

	UFUNCTION(BlueprintCallable)
	void OnExitRequested();

	UFUNCTION(BlueprintCallable)
	void OnClaimRewards(int32 ritualId);

public:
	UAtlantaRitualsScreen();
};

FORCEINLINE uint32 GetTypeHash(const UAtlantaRitualsScreen) { return 0; }
