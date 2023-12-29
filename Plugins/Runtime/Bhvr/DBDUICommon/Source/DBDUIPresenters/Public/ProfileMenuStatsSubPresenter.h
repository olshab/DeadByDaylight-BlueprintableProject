#pragma once

#include "CoreMinimal.h"
#include "SubPresenter.h"
#include "UObject/ScriptInterface.h"
#include "ProfileMenuStatsSubPresenter.generated.h"

class IProfileMenuStatsViewInterface;

UCLASS(Blueprintable)
class DBDUIPRESENTERS_API UProfileMenuStatsSubPresenter : public USubPresenter
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TScriptInterface<IProfileMenuStatsViewInterface> _profileMenuStatsWidget;

public:
	UProfileMenuStatsSubPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UProfileMenuStatsSubPresenter) { return 0; }
