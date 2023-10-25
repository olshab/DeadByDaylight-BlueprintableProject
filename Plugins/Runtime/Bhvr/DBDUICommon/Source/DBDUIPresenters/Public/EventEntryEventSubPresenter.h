#pragma once

#include "CoreMinimal.h"
#include "SubPresenter.h"
#include "UObject/ScriptInterface.h"
#include "EventEntryEventSubPresenter.generated.h"

class UEventEntryPresenter;
class IEventInfoViewInterface;
class UEventTabViewData;

UCLASS(Blueprintable)
class UEventEntryEventSubPresenter : public USubPresenter
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TScriptInterface<IEventInfoViewInterface> _eventTabWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UEventTabViewData* _tabsData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UEventEntryPresenter* _parentPresenter;

protected:
	UFUNCTION(BlueprintCallable)
	void OnArchiveButtonClicked();

public:
	UEventEntryEventSubPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UEventEntryEventSubPresenter) { return 0; }
