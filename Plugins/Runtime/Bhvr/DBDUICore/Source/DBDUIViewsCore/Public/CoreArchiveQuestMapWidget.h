#pragma once

#include "CoreMinimal.h"
#include "ArchiveQuestMapViewInterface.h"
#include "EEasingType.h"
#include "CoreTabContentWidget.h"
#include "ArchiveNodeGraphViewData.h"
#include "Templates/SubclassOf.h"
#include "TomeQuestNodeHoveredDelegate.h"
#include "ArchiveMapPathViewData.h"
#include "TomeQuestMapCreatedDelegate.h"
#include "TomeQuestNodeUnhoveredDelegate.h"
#include "TomeQuestNodeSelectedDelegate.h"
#include "CoreArchiveQuestMapWidget.generated.h"

class UCanvasPanel;
class UCoreButtonWidget;
class UCoreArchiveQuestNodeWidget;
class UCoreArchiveQuestPathWidget;
class UAkAudioEvent;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreArchiveQuestMapWidget : public UCoreTabContentWidget, public IArchiveQuestMapViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCanvasPanel* ChallengesContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UCoreArchiveQuestNodeWidget> ArchiveQuestNodeWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UCoreArchiveQuestPathWidget> ArchiveQuestPathWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxDisplayedNodes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxDisplayedPaths;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float QuestMapRevealDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float NodeRevealDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PathRevealDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EEasingType NodeRevealEasingType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EEasingType PathRevealEasingType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* QuestMapGenerationSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FArchiveNodeGraphViewData> _nodeGraphDataList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FArchiveMapPathViewData> _pathDataList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTomeQuestMapCreatedDelegate _questMapCreatedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTomeQuestNodeHoveredDelegate _questNodeHoveredDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTomeQuestNodeUnhoveredDelegate _questNodeUnhoveredDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTomeQuestNodeSelectedDelegate _questNodeSelectedDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export)
	TMap<FName, UCoreArchiveQuestNodeWidget*> _nodeDictionary;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export)
	TMap<FName, UCoreArchiveQuestPathWidget*> _pathDictionary;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UCoreArchiveQuestNodeWidget*> _nodeWidgetPool;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UCoreArchiveQuestPathWidget*> _pathWidgetPool;

protected:
	UFUNCTION(BlueprintCallable)
	void UnbindFromPath(UCoreArchiveQuestPathWidget* path);

	UFUNCTION(BlueprintCallable)
	void UnbindFromNode(UCoreArchiveQuestNodeWidget* node);

private:
	UFUNCTION(BlueprintCallable)
	void SetupPath(const FArchiveMapPathViewData& pathData);

	UFUNCTION(BlueprintCallable)
	void SetupNode(const FArchiveNodeGraphViewData& nodeData);

protected:
	UFUNCTION(BlueprintCallable)
	void OnNodeUnhovered(UCoreButtonWidget* buttonTarget);

private:
	UFUNCTION(BlueprintCallable)
	void OnNodesRevealCompleted();

protected:
	UFUNCTION(BlueprintCallable)
	void OnNodeHovered(UCoreButtonWidget* buttonTarget);

	UFUNCTION(BlueprintCallable)
	void OnNodeClicked(UCoreButtonWidget* buttonTarget);

	UFUNCTION(BlueprintCallable)
	void BindToPath(UCoreArchiveQuestPathWidget* path);

	UFUNCTION(BlueprintCallable)
	void BindToNode(UCoreArchiveQuestNodeWidget* node);

public:
	UCoreArchiveQuestMapWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreArchiveQuestMapWidget) { return 0; }
