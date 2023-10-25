#pragma once

#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "UMGFriendElementWidget.h"
#include "UMGFriendPartyListElementWidget.generated.h"

class UImage;
class UWidgetSwitcher;
class UButton;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGFriendPartyListElementWidget : public UUMGFriendElementWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UWidgetSwitcher* ButtonOrStatusSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UButton* CancelInviteButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* PartyStatusImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateBrush IconNotReady;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateBrush IconReady;

protected:
	UFUNCTION(BlueprintCallable)
	void HandleCancelInviteButtonClicked();

public:
	UUMGFriendPartyListElementWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGFriendPartyListElementWidget) { return 0; }
