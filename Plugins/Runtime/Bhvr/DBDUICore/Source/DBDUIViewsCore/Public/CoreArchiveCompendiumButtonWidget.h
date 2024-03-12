#pragma once

#include "CoreMinimal.h"
#include "CoreButtonWidget.h"
#include "CompendiumButtonData.h"
#include "EArchivesStoryLevelStatus.h"
#include "ETooltipHorizontalAlignment.h"
#include "ETooltipVerticalAlignment.h"
#include "CoreArchiveCompendiumButtonWidget.generated.h"

class UDBDImage;
class UDBDTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreArchiveCompendiumButtonWidget : public UCoreButtonWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ETooltipHorizontalAlignment HorizontalAlignment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ETooltipVerticalAlignment VerticalAlignment;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDImage* TomeProgressStyleTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* VolumeIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCompendiumButtonData _compendiumButtonData;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetLevelProgressionVisual(int32 buttonLevel, EArchivesStoryLevelStatus levelStatus);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetGhostStory(bool isGhostStory);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetButtonVisual(const FCompendiumButtonData& buttonData);

public:
	UFUNCTION(BlueprintCallable)
	void SetButtonData(const FCompendiumButtonData& buttonData);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ResetVisuals();

protected:
	UFUNCTION(BlueprintCallable)
	void OnButtonUnhovered();

	UFUNCTION(BlueprintCallable)
	void OnButtonHovered();

public:
	UFUNCTION(BlueprintCallable)
	FString GetTomeId();

public:
	UCoreArchiveCompendiumButtonWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreArchiveCompendiumButtonWidget) { return 0; }
