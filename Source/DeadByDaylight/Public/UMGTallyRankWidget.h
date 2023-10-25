#pragma once

#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "UMGTallyListElementWidget.h"
#include "UObject/SoftObjectPtr.h"
#include "TallyScorePipsData.h"
#include "UMGTallyRankWidget.generated.h"

class UUMGTallyEmblemWidget;
class UHorizontalBox;
class UTextBlock;
class UUMGTallyRankBanner;
class UUMGTallyProgressBar;

UCLASS(Blueprintable, EditInlineNew)
class UUMGTallyRankWidget : public UUMGTallyListElementWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FMargin _emblemsPadding;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSoftClassPtr<UUMGTallyEmblemWidget> EmblemWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UHorizontalBox* EmblemsContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGTallyProgressBar* ProgressBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGTallyRankBanner* RankBanner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* RankProgressLabel;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UUMGTallyEmblemWidget*> _emblems;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FTallyScorePipsData _scoreData;

public:
	UFUNCTION(BlueprintPure)
	FTallyScorePipsData GetScoreData() const;

	UFUNCTION(BlueprintPure)
	TArray<UUMGTallyEmblemWidget*> GetEmblems() const;

public:
	UUMGTallyRankWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGTallyRankWidget) { return 0; }
