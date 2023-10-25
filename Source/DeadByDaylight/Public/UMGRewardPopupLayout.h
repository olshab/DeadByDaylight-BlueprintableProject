#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "RewardLayoutWidgetToGenerate.h"
#include "UMGRewardPopupLayout.generated.h"

class UHorizontalBox;
class UUMGRewardSlotTutorialPopupRewardWidget;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGRewardPopupLayout : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UHorizontalBox* TopHorizontalBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UHorizontalBox* BottomHorizontalBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGRewardSlotTutorialPopupRewardWidget* FirstCharacter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGRewardSlotTutorialPopupRewardWidget* SecondCharacter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGRewardSlotTutorialPopupRewardWidget* ThirdCharacter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGRewardSlotTutorialPopupRewardWidget* FourthCharacter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGRewardSlotTutorialPopupRewardWidget* FifthCharacter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGRewardSlotTutorialPopupRewardWidget* AuricCells;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGRewardSlotTutorialPopupRewardWidget* IridescentShards;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGRewardSlotTutorialPopupRewardWidget* Bloodpoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRewardLayoutWidgetToGenerate TopWidgetToGenerate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRewardLayoutWidgetToGenerate BottomWidgetToGenerate;

public:
	UUMGRewardPopupLayout();
};

FORCEINLINE uint32 GetTypeHash(const UUMGRewardPopupLayout) { return 0; }
