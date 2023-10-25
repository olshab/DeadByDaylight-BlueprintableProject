#pragma once

#include "CoreMinimal.h"
#include "CoreButtonWidget.h"
#include "FriendItemWidget.generated.h"

class UDBDRichTextBlock;
class UDBDImage;

UCLASS(Blueprintable, EditInlineNew)
class UFriendItemWidget : public UCoreButtonWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDRichTextBlock* PlayerNameText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDRichTextBlock* StatusText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDImage* InviteIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDImage* CrossplayIcon;

public:
	UFriendItemWidget();
};

FORCEINLINE uint32 GetTypeHash(const UFriendItemWidget) { return 0; }
