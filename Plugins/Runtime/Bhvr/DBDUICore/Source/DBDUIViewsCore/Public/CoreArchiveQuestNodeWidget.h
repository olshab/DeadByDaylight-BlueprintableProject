#pragma once

#include "CoreMinimal.h"
#include "ETooltipVerticalAlignment.h"
#include "EStoryNodeState.h"
#include "ENodeStatusChange.h"
#include "CoreButtonWidget.h"
#include "ETooltipHorizontalAlignment.h"
#include "EItemRarity.h"
#include "ArchiveNodeViewData.h"
#include "UObject/SoftObjectPtr.h"
#include "ECurrencyType.h"
#include "CoreArchiveQuestNodeWidget.generated.h"

class UDBDImage;
class UOverlay;
class UDBDRichTextBlock;
class UAkAudioEvent;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreArchiveQuestNodeWidget : public UCoreButtonWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ETooltipHorizontalAlignment HorizontalAlignment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ETooltipVerticalAlignment VerticalAlignment;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDImage* Icon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UOverlay* VignetteTextIndicatorOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UOverlay* VignetteImageIndicatorOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UOverlay* VignetteCurrencyAmountOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDRichTextBlock* VignetteCurrencyAmountText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<ENodeStatusChange, UAkAudioEvent*> StatusChangeAudioEvents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FArchiveNodeViewData _nodeData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _nodeId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isChallengeReminderNode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isDraggable;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void UpdateStoryIndicatorOpacity(bool isImageReward, bool isCompleted);

public:
	UFUNCTION(BlueprintCallable)
	void UpdateNode(const FArchiveNodeViewData& data);

protected:
	UFUNCTION(BlueprintCallable)
	void UpdateAllStoryIndicators();

	UFUNCTION(BlueprintCallable)
	void ShowRewardNodeTooltip();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetIcon(bool isReward, const TSoftObjectPtr<UTexture2D>& iconTexture);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetCustomizationRewardRarity(EItemRarity rarity);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetCurrencyRewardBackground(ECurrencyType currencyType);

public:
	UFUNCTION(BlueprintCallable)
	void Reset();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnStatusChanged(ENodeStatusChange nodeStatusChange);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnReset();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnInit();

public:
	UFUNCTION(BlueprintPure)
	bool NeedsChallengeReminderHoverAnimation() const;

	UFUNCTION(BlueprintPure)
	bool IsValidNode() const;

	UFUNCTION(BlueprintPure)
	bool IsSelectableNode() const;

	UFUNCTION(BlueprintCallable)
	void InitNode(const FName& nodeId, const FArchiveNodeViewData& data, bool isChallengeReminderNode);

protected:
	UFUNCTION(BlueprintCallable)
	void HandleStatusChange(const EStoryNodeState prevStatus, const EStoryNodeState currentStatus);

	UFUNCTION(BlueprintCallable)
	void BroadcastDragBegin();

public:
	UCoreArchiveQuestNodeWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreArchiveQuestNodeWidget) { return 0; }
