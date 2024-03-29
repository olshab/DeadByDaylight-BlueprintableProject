#pragma once

#include "CoreMinimal.h"
#include "CoreSelectableButtonWidget.h"
#include "EPlayerRole.h"
#include "ArchiveChallengeReminderViewData.h"
#include "CoreArchiveChallengeReminderSlotWidget.generated.h"

class UCoreArchiveQuestNodeWidget;
class UDBDImage;
class UCoreOnHoverBorderWidget;
class UDBDTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreArchiveChallengeReminderSlotWidget : public UCoreSelectableButtonWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreArchiveQuestNodeWidget* Node;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDImage* EmptySlotImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDImage* InactiveBG;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDImage* ActiveBG;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDImage* SmokeBackground;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDImage* ProgressBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDImage* SelectorHighlight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* TitleTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* SubtitleTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* InactiveTitleTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* InactiveSubtitleTB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreOnHoverBorderWidget* OnHoverBorder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPlayerRole _slotRole;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _hasActiveHoverEffect;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void UpdateVisualState(const FArchiveChallengeReminderViewData& data);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void UpdateProgressBar(float progress);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void UpdateActiveState(bool isActive, bool playAnimation);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SwapChallenge(const FArchiveChallengeReminderViewData& data);

	UFUNCTION(BlueprintCallable)
	void SetSlotSelectorState(bool isSelectorOpen);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetQuestNodeHoverEffect(bool isHovered);

	UFUNCTION(BlueprintCallable)
	void SetData(const FArchiveChallengeReminderViewData& data);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void InitVisualState();

public:
	UFUNCTION(BlueprintCallable)
	void Init(EPlayerRole role);

	UFUNCTION(BlueprintCallable)
	void ClearData();

public:
	UCoreArchiveChallengeReminderSlotWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreArchiveChallengeReminderSlotWidget) { return 0; }
