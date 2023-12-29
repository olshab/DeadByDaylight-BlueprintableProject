#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "ECustomizationCategory.h"
#include "CustomizationItemPreviewAreaViewData.h"
#include "CoreImagePreviewAreaWidget.generated.h"

class UDBDImage;
class UDBDRichTextBlock;
class UCustomizationItemGridContainer;

UCLASS(Blueprintable, EditInlineNew)
class UCoreImagePreviewAreaWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDImage* PreviewArea;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDImage* PreviewAreaBG;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDRichTextBlock* ItemContainerText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCustomizationItemGridContainer* ItemContainer;

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void ShowBGImage();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetPreviewContainerVisual(const ECustomizationCategory customizationCategory);

	UFUNCTION(BlueprintCallable)
	void SetData(const FCustomizationItemPreviewAreaViewData& viewData);

protected:
	UFUNCTION(BlueprintCallable)
	void OnItemClicked(const int32 selectedIndex);

public:
	UCoreImagePreviewAreaWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreImagePreviewAreaWidget) { return 0; }
