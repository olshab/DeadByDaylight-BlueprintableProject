#pragma once

#include "CoreMinimal.h"
#include "ECustomizationCategory.h"
#include "MobileBaseUserWidget.h"
#include "UMGCustomizationCategoriesBar.generated.h"

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGCustomizationCategoriesBar : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetSelectedCategory(const ECustomizationCategory category);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetRole(const bool isKiller);

protected:
	UFUNCTION(BlueprintCallable)
	void BroadcastCustomizationCategoryButtonPressed(ECustomizationCategory categoryIndex);

public:
	UUMGCustomizationCategoriesBar();
};

FORCEINLINE uint32 GetTypeHash(const UUMGCustomizationCategoriesBar) { return 0; }
