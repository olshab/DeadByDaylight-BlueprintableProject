#pragma once

#include "CoreMinimal.h"
#include "SubPresenter.h"
#include "UObject/NoExportTypes.h"
#include "UObject/ScriptInterface.h"
#include "EArchivesStoryLevelStatus.h"
#include "EPlayerRole.h"
#include "ArchiveQuestMapSubPresenter.generated.h"

class IArchiveQuestMapViewInterface;
class IArchiveLevelProgressionViewInterface;

UCLASS(Blueprintable)
class DBDUIPRESENTERS_API UArchiveQuestMapSubPresenter : public USubPresenter
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TScriptInterface<IArchiveQuestMapViewInterface> _archiveQuestMapWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TScriptInterface<IArchiveLevelProgressionViewInterface> _archiveLevelProgressionWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<EArchivesStoryLevelStatus> _storyLevelStatusCache;

private:
	UFUNCTION(BlueprintCallable)
	void UpdateTomeLevels();

	UFUNCTION(BlueprintCallable)
	void OnTomeMapCreated();

	UFUNCTION(BlueprintCallable)
	void OnTomeLevelRewardAnimationDone();

	UFUNCTION(BlueprintCallable)
	void OnQuestNodeUnhovered(EPlayerRole role);

	UFUNCTION(BlueprintCallable)
	void OnQuestNodeHovered(EPlayerRole role);

	UFUNCTION(BlueprintCallable)
	void OnPlayerCardUpdated(const FString& badgeId, const FString& bannerId);

	UFUNCTION(BlueprintCallable)
	void OnNodeSelected(const FName& nodeId, EPlayerRole role, const FVector2D& position);

	UFUNCTION(BlueprintCallable)
	void OnLevelSelected(const int32 levelIndex);

	UFUNCTION(BlueprintCallable)
	void NavigateToNextLevelAfterUnlock();

	UFUNCTION(BlueprintCallable)
	void GetCurrentLevel();

public:
	UArchiveQuestMapSubPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UArchiveQuestMapSubPresenter) { return 0; }
