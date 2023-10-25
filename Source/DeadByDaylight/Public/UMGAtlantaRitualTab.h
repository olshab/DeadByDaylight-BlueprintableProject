#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UObject/SoftObjectPtr.h"
#include "UMGAtlantaRitualTab.generated.h"

class UUMGAltantaRitual;
class UVerticalBox;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGAtlantaRitualTab : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UVerticalBox* ContainerBox;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, meta=(AllowPrivateAccess=true))
	TSoftClassPtr<UUMGAltantaRitual> _itemWidgetClass;

private:
	UFUNCTION(BlueprintCallable)
	void BroadcastOnClaimRewardsButtonPressed(const int32 ritualId);

public:
	UUMGAtlantaRitualTab();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlantaRitualTab) { return 0; }
