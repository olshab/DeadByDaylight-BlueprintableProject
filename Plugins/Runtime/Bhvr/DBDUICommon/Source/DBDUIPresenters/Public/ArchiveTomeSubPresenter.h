#pragma once

#include "CoreMinimal.h"
#include "SubPresenter.h"
#include "UObject/ScriptInterface.h"
#include "EArchiveTomeMenuState.h"
#include "ArchiveTomeSubPresenter.generated.h"

class UMaterialInterface;
class UArchiveQuestMapSubPresenter;
class UArchiveEditorSubPresenter;
class UArchiveJournalSubPresenter;
class IArchiveTomeViewInterface;

UCLASS(Blueprintable)
class DBDUIPRESENTERS_API UArchiveTomeSubPresenter : public USubPresenter
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UArchiveQuestMapSubPresenter* _archiveQuestMapSubPresenter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UArchiveEditorSubPresenter* _archiveEditorSubPresenter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UArchiveJournalSubPresenter* _archiveJournalSubPresenter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	USubPresenter* _activeSubPresenter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TScriptInterface<IArchiveTomeViewInterface> _archiveTomeWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UMaterialInterface* _archiveSideNavSkinMaterial;

public:
	UFUNCTION(BlueprintCallable)
	void OnMenuTabSelected(EArchiveTomeMenuState menuState);

private:
	UFUNCTION(BlueprintCallable)
	void OnEditorWidgetSwitchComplete();

public:
	UArchiveTomeSubPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UArchiveTomeSubPresenter) { return 0; }
