#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "CharacterSlotData.h"
#include "UMGCharacterButton.generated.h"

class UUMGCharacterPrice;
class UImage;
class UCanvasPanel;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGCharacterButton : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* PortraitIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* CharacterSelectedPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* LevelPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* CharacterLevelText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* OwnedCustomizationText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* TotalCustomizationText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* PricePanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGCharacterPrice* CellPrice;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGCharacterPrice* ShardPrice;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FCharacterSlotData CharacterSlotData;

public:
	UFUNCTION(BlueprintCallable)
	void SetIsSelected(bool isSelected);

	UFUNCTION(BlueprintCallable)
	void SetCharacterData(const FCharacterSlotData& characterData);

	UFUNCTION(BlueprintCallable)
	void BroadcastClickedEvent(int32 characterIndex);

public:
	UUMGCharacterButton();
};

FORCEINLINE uint32 GetTypeHash(const UUMGCharacterButton) { return 0; }
