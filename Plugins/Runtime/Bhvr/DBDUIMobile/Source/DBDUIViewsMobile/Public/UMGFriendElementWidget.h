#pragma once

#include "CoreMinimal.h"
#include "UMGBaseFriendListElement.h"
#include "Styling/SlateBrush.h"
#include "UMGFriendElementWidget.generated.h"

class UImage;
class UButton;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGFriendElementWidget : public UUMGBaseFriendListElement
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UImage* FavoriteSlot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UButton* FavoriteButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UImage* SelectionImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UImage* SelectedPicture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UImage* FriendIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateBrush UnFavoriteBrush;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateBrush FavoriteBrush;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateBrush MutedBrush;

protected:
	UFUNCTION(BlueprintCallable)
	void HandleSelectionButton();

	UFUNCTION(BlueprintCallable)
	void HandleFavoriteButtonClicked();

public:
	UUMGFriendElementWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGFriendElementWidget) { return 0; }
