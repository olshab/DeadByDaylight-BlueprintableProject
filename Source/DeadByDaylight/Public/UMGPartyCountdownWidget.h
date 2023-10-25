#pragma once

#include "CoreMinimal.h"
#include "UMGBaseCountdownWidget.h"
#include "UMGPartyCountdownWidget.generated.h"

class UCanvasPanel;
class UButton;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGPartyCountdownWidget : public UUMGBaseCountdownWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UButton* UnreadyButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* UnreadyButtonContainer;

private:
	UFUNCTION(BlueprintCallable)
	void OnUnreadyButtonClicked();

public:
	UUMGPartyCountdownWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGPartyCountdownWidget) { return 0; }
