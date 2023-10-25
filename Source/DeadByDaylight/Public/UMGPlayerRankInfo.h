#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "EPlayerRole.h"
#include "UObject/NoExportTypes.h"
#include "UMGPlayerRankInfo.generated.h"

class UTextBlock;
class UUMGTallyPipsContainer;
class UUMGTallyRankFrame;
class UImage;
class UCanvasPanel;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGPlayerRankInfo : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGTallyPipsContainer* PipsContainerWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGTallyRankFrame* RankFrameWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* Background;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* TitleLabel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* RankLabel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* PipLabel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* HighlightContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor _survivorColorBackground;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor _killerColorBackground;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _disableOpacity;

public:
	UFUNCTION(BlueprintCallable)
	void SetData(int32 rank, int32 pipsRequiredForNextRank, int32 filledPips, FText titleLabelNew, FText pipLabelNew, EPlayerRole playerRole, bool IsHighlight);

public:
	UUMGPlayerRankInfo();
};

FORCEINLINE uint32 GetTypeHash(const UUMGPlayerRankInfo) { return 0; }
