#pragma once

#include "CoreMinimal.h"
#include "Layout/Geometry.h"
#include "ArchiveNodeViewData.h"
#include "CustomizationTooltipViewData.h"
#include "ArchiveRewardNodeTooltipViewData.h"
#include "ETooltipType.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "CorePlayerLevelTooltipViewData.h"
#include "RankTooltipViewData.h"
#include "ETooltipHorizontalAlignment.h"
#include "ETooltipVerticalAlignment.h"
#include "LoadoutTooltipData.h"
#include "CurrencyProgressionTooltipViewData.h"
#include "CharacterTooltipViewData.h"
#include "CompendiumButtonData.h"
#include "DBDTooltipManager.generated.h"

class UUserWidget;
class UTooltipRoot;

UCLASS(Blueprintable)
class DBDUIVIEWSCORE_API UDBDTooltipManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UTooltipRoot* _rootWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TMap<ETooltipType, UUserWidget*> _tooltipPool;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UUserWidget* _currentTooltip;

public:
	UFUNCTION(BlueprintCallable)
	void ShowRankTooltip(const FRankTooltipViewData& tooltipViewData, const FGeometry& triggerGeometry, const ETooltipHorizontalAlignment tooltipHorizontalAlignment, const ETooltipVerticalAlignment tooltipVerticalAlignment);

	UFUNCTION(BlueprintCallable)
	void ShowPlayerLevelTooltip(const FCorePlayerLevelTooltipViewData& tooltipViewData, const FGeometry& triggerGeometry, const ETooltipHorizontalAlignment tooltipHorizontalAlignment, ETooltipVerticalAlignment tooltipVerticalAlignment);

	UFUNCTION(BlueprintCallable)
	void ShowLoadoutTooltip(const FLoadoutTooltipData& tooltipViewData, const FGeometry& triggerGeometry, const ETooltipHorizontalAlignment tooltipHorizontalAlignment, ETooltipVerticalAlignment tooltipVerticalAlignment);

	UFUNCTION(BlueprintCallable)
	void ShowLabelTooltip(const FText& tooltipViewData, const FGeometry& triggerGeometry, const ETooltipHorizontalAlignment tooltipHorizontalAlignment, ETooltipVerticalAlignment tooltipVerticalAlignment);

	UFUNCTION(BlueprintCallable)
	void ShowCustomizationTooltip(const FCustomizationTooltipViewData& tooltipViewData, const FGeometry& triggerGeometry, const ETooltipHorizontalAlignment tooltipHorizontalAlignment, ETooltipVerticalAlignment tooltipVerticalAlignment);

	UFUNCTION(BlueprintCallable)
	void ShowCurrencyTooltip(const FCurrencyProgressionTooltipViewData& tooltipViewData, const FGeometry& triggerGeometry, const ETooltipHorizontalAlignment tooltipHorizontalAlignment, ETooltipVerticalAlignment tooltipVerticalAlignment);

	UFUNCTION(BlueprintCallable)
	void ShowCharacterTooltip(const FCharacterTooltipViewData& tooltipViewData, const FGeometry& triggerGeometry, const ETooltipHorizontalAlignment tooltipHorizontalAlignment, ETooltipVerticalAlignment tooltipVerticalAlignment);

	UFUNCTION(BlueprintCallable)
	void ShowArchiveRewardNodeTooltip(const FArchiveRewardNodeTooltipViewData& tooltipViewData, const FGeometry& triggerGeometry, const ETooltipHorizontalAlignment tooltipHorizontalAlignment, ETooltipVerticalAlignment tooltipVerticalAlignment);

	UFUNCTION(BlueprintCallable)
	void ShowArchiveNodeTooltip(const FArchiveNodeViewData& tooltipViewData, const FGeometry& triggerGeometry, const ETooltipHorizontalAlignment tooltipHorizontalAlignment, ETooltipVerticalAlignment tooltipVerticalAlignment);

	UFUNCTION(BlueprintCallable)
	void ShowArchiveCompendiumTooltip(const FCompendiumButtonData& tooltipViewData, const FGeometry& triggerGeometry, const ETooltipHorizontalAlignment tooltipHorizontalAlignment, ETooltipVerticalAlignment tooltipVerticalAlignment);

private:
	UFUNCTION(BlueprintCallable)
	void OnViewportCreated();

public:
	UFUNCTION(BlueprintCallable)
	void HideTooltip();

public:
	UDBDTooltipManager();
};

FORCEINLINE uint32 GetTypeHash(const UDBDTooltipManager) { return 0; }
