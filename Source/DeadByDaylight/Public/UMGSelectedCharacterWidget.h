#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "OnButtonClickEvent.h"
#include "UMGSelectedCharacterWidget.generated.h"

class UUMGCharacterPrestigeButton;
class UVerticalBox;
class UTextBlock;
class UImage;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGSelectedCharacterWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGCharacterPrestigeButton* PrestigeButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* CharacterNameText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* CharacterLevelText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UVerticalBox* CharacterLevelVerticalBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* LeaderIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnButtonClickEvent _onCancelPartyButtonClick;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetVisualsForReadyState(const bool isPlayerReady);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetVisualsForPartyState(const bool triggerPartyVisuals);

protected:
	UFUNCTION(BlueprintCallable)
	void OnPrestigeButtonClicked();

public:
	UUMGSelectedCharacterWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGSelectedCharacterWidget) { return 0; }
