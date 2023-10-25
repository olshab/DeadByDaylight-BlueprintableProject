#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "AtlantaFriendUIData.h"
#include "EActionOnFriendType.h"
#include "UMGBaseFriendListElement.generated.h"

class UCanvasPanel;
class UUMGBaseButtonWidget;
class UDataTable;
class UNamedSlot;
class UImage;
class UTextBlock;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class DBDUIVIEWSMOBILE_API UUMGBaseFriendListElement : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* StatusPicture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* FriendName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* FriendStatus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* SelectionHighlight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGBaseButtonWidget* ItemSelectionBaseButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UNamedSlot* ContextualMenuPosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAtlantaFriendUIData _cachedFriendData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UDataTable* FriendUIStatusDataTable;

public:
	UFUNCTION(BlueprintCallable)
	void TriggerActionOnThisFriend(EActionOnFriendType actionType);

public:
	UUMGBaseFriendListElement();
};

FORCEINLINE uint32 GetTypeHash(const UUMGBaseFriendListElement) { return 0; }
