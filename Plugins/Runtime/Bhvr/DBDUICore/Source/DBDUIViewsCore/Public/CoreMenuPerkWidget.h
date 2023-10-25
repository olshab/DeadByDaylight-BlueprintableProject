#pragma once

#include "CoreMinimal.h"
#include "LoadoutTooltipData.h"
#include "CoreMenuLoadoutPartWidget.h"
#include "CoreMenuPerkWidget.generated.h"

class UMenuPerkViewData;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreMenuPerkWidget : public UCoreMenuLoadoutPartWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void SetMenuPerkTooltipData(const FLoadoutTooltipData& tooltipData);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetMenuPerkLevel(int32 level);

public:
	UFUNCTION(BlueprintCallable)
	void SetMenuPerkData(const UMenuPerkViewData* data);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetEmptyPerk();

public:
	UCoreMenuPerkWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMenuPerkWidget) { return 0; }
