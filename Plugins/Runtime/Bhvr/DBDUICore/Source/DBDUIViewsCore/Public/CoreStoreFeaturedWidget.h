#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "StoreFeaturedViewInterface.h"
#include "CoreStoreFeaturedWidget.generated.h"

class UCoreStoreFeaturedMysteryBoxWidget;
class UStoreCustomizationItemViewData;
class UCoreStoreFeaturedCustomizationItemContainerWidget;
class UCoreStoreFeaturedCharacterContainerWidget;
class UCoreStoreFeaturedChapterPackWidget;

UCLASS(Blueprintable, EditInlineNew)
class UCoreStoreFeaturedWidget : public UCoreBaseUserWidget, public IStoreFeaturedViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<UStoreCustomizationItemViewData*> _featuredItems;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreStoreFeaturedCustomizationItemContainerWidget* CustomizationItemContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreStoreFeaturedCharacterContainerWidget* CharacterContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreStoreFeaturedMysteryBoxWidget* MysteryBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreStoreFeaturedChapterPackWidget* FeaturedChapterPack;

public:
	UCoreStoreFeaturedWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreFeaturedWidget) { return 0; }
