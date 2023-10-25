#pragma once

#include "CoreMinimal.h"
#include "CoreSelectableButtonWidget.h"
#include "CoreStoreFeaturedCustomizationItemWidget.generated.h"

class UStoreCustomizationItemViewData;
class UUITweenInstance;

UCLASS(Blueprintable, EditInlineNew)
class UCoreStoreFeaturedCustomizationItemWidget : public UCoreSelectableButtonWidget
{
	GENERATED_BODY()

private:
	UFUNCTION(BlueprintCallable)
	void UpdateSize(UUITweenInstance* tween);

	UFUNCTION(BlueprintCallable)
	void UpdatePosition(UUITweenInstance* tween);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetCustomizationData(UStoreCustomizationItemViewData* specialOffersData);

public:
	UCoreStoreFeaturedCustomizationItemWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreFeaturedCustomizationItemWidget) { return 0; }
