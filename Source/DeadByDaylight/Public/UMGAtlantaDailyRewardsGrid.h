#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UObject/SoftObjectPtr.h"
#include "UMGAtlantaDailyRewardsGrid.generated.h"

class UUMGDailyRewardWidget;
class UUniformGridPanel;
class UCanvasPanel;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGAtlantaDailyRewardsGrid : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSoftClassPtr<UUMGDailyRewardWidget> BigDailyRewardWidgetTemplate_type_7;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSoftClassPtr<UUMGDailyRewardWidget> BigDailyRewardWidgetTemplate_type_9;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSoftClassPtr<UUMGDailyRewardWidget> BigDailyRewardWidgetTemplate_type_13;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSoftClassPtr<UUMGDailyRewardWidget> SmallDailyRewardWidgetTemplate_type_7;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSoftClassPtr<UUMGDailyRewardWidget> SmallDailyRewardWidgetTemplate_type_9;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSoftClassPtr<UUMGDailyRewardWidget> SmallDailyRewardWidgetTemplate_type_13;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUniformGridPanel* DailyRewardWidgetsGridPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* LastDailyRewardWidgetPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NumberOfItems;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UClass* _bigWidgetTemplate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UClass* _smallWidgetTemplate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UUMGDailyRewardWidget*> _rewardWidgets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UUMGDailyRewardWidget* _widgetToAttach;

protected:
	UFUNCTION(BlueprintCallable)
	void StartRewardsIntroRewardSequence();

public:
	UFUNCTION(BlueprintCallable)
	void StartIntroSequence();

protected:
	UFUNCTION(BlueprintCallable)
	void PlayNextRewardIntroAnimation();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void InitializeLayouts_BP();

public:
	UUMGAtlantaDailyRewardsGrid();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlantaDailyRewardsGrid) { return 0; }
