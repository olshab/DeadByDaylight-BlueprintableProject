#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "StoreFeaturedViewInterface.h"
#include "OnFeaturedCharacterClickedDelegate.h"
#include "CoreStoreFeaturedWidget.generated.h"

class UStoreCustomizationItemViewData;
class UCoreStoreFeaturedCustomizationItemContainerWidget;
class UCoreStoreFeaturedCharacterContainerWidget;

UCLASS(Blueprintable, EditInlineNew)
class UCoreStoreFeaturedWidget : public UCoreBaseUserWidget, public IStoreFeaturedViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<UStoreCustomizationItemViewData*> _featuredItems;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreStoreFeaturedCustomizationItemContainerWidget* CustomizationItemContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreStoreFeaturedCharacterContainerWidget* CharacterContainer;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FOnFeaturedCharacterClickedDelegate _featuredCharacterSelectedDelegate;

public:
	UCoreStoreFeaturedWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreFeaturedWidget) { return 0; }
