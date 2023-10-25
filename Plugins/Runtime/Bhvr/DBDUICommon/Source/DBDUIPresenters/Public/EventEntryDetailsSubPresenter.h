#pragma once

#include "CoreMinimal.h"
#include "SubPresenter.h"
#include "UObject/ScriptInterface.h"
#include "DetailsTabViewData.h"
#include "EventEntryDetailsSubPresenter.generated.h"

class IEventDetailsViewInterface;
class UEventEntryPresenter;

UCLASS(Blueprintable)
class UEventEntryDetailsSubPresenter : public USubPresenter
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TScriptInterface<IEventDetailsViewInterface> _detailsTabWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FDetailsTabViewData _viewData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UEventEntryPresenter* _parentPresenter;

public:
	UEventEntryDetailsSubPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UEventEntryDetailsSubPresenter) { return 0; }
