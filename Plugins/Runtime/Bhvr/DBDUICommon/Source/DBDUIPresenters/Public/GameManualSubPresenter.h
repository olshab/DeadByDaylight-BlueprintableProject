#pragma once

#include "CoreMinimal.h"
#include "EHelpType.h"
#include "SubPresenter.h"
#include "UObject/ScriptInterface.h"
#include "GameManualSubPresenter.generated.h"

class IGameManualViewInterface;

UCLASS(Blueprintable)
class DBDUIPRESENTERS_API UGameManualSubPresenter : public USubPresenter
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TScriptInterface<IGameManualViewInterface> _gameManualWidget;

private:
	UFUNCTION(BlueprintCallable)
	void OnCategoryCategoryEntered(EHelpType categoryType);

public:
	UGameManualSubPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UGameManualSubPresenter) { return 0; }
