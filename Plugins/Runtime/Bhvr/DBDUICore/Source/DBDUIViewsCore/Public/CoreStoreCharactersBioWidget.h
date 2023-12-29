#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "StoreCharactersBioViewInterface.h"
#include "CoreStoreCharactersBioWidget.generated.h"

class UDBDRichTextBlock;
class UScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreStoreCharactersBioWidget : public UCoreBaseUserWidget, public IStoreCharactersBioViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDRichTextBlock* TextContent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UScrollBox* Scroll;

public:
	UCoreStoreCharactersBioWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreCharactersBioWidget) { return 0; }
