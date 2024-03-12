#pragma once

#include "CoreMinimal.h"
#include "FeaturedChapterPackClickedDelegate.h"
#include "CoreSelectableButtonWidget.h"
#include "CoreStoreFeaturedChapterPackWidget.generated.h"

class UStoreFeaturedChapterPackViewData;

UCLASS(Blueprintable, EditInlineNew)
class UCoreStoreFeaturedChapterPackWidget : public UCoreSelectableButtonWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FFeaturedChapterPackClickedDelegate OnFeaturedChapterPackClicked;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UStoreFeaturedChapterPackViewData* _cachedViewData;

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetData(UStoreFeaturedChapterPackViewData* viewData);

public:
	UCoreStoreFeaturedChapterPackWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreFeaturedChapterPackWidget) { return 0; }
