#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "AtlantaRitualUIData.h"
#include "UMGAltantaRitual.generated.h"

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGAltantaRitual : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText _claimText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText _claimedText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText _completedText;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetData(const FAtlantaRitualUIData& ritual);

protected:
	UFUNCTION(BlueprintCallable)
	void BroadcastOnClaimRewardsButtonPressed(const int32 ritualId);

public:
	UUMGAltantaRitual();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAltantaRitual) { return 0; }
