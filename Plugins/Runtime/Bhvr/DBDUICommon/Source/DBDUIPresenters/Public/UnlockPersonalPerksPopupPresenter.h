#pragma once

#include "CoreMinimal.h"
#include "GenericPopupPresenter.h"
#include "UnlockPersonalPerksPopupPresenter.generated.h"

class UMenuPerkViewData;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIPRESENTERS_API UUnlockPersonalPerksPopupPresenter : public UGenericPopupPresenter
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<UMenuPerkViewData*> _perksData;

public:
	UUnlockPersonalPerksPopupPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UUnlockPersonalPerksPopupPresenter) { return 0; }
