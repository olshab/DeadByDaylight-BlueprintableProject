#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGTooltipContentPlayerLevelWidget.generated.h"

class UUMGLevelBannerWidget;
class URichTextBlock;
class UTextBlock;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGTooltipContentPlayerLevelWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText PlayerLevelText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGLevelBannerWidget* LevelBanner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	URichTextBlock* LevelExperienceRichText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* ExperienceToNextLevelText;

public:
	UFUNCTION(BlueprintCallable)
	void SetInfo(const int32 playerLevel, const int32 playerPrestige, const int32 currentExperience, const int32 nextLevelExperience);

public:
	UUMGTooltipContentPlayerLevelWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGTooltipContentPlayerLevelWidget) { return 0; }
