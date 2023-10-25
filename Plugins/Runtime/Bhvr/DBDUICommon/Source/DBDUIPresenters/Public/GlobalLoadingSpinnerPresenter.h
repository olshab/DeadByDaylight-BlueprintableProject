#pragma once

#include "CoreMinimal.h"
#include "Presenter.h"
#include "Templates/SubclassOf.h"
#include "GlobalLoadingSpinnerPresenter.generated.h"

class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIPRESENTERS_API UGlobalLoadingSpinnerPresenter : public UPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> GlobalLoadSpinnerWidgetClass;

public:
	UGlobalLoadingSpinnerPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UGlobalLoadingSpinnerPresenter) { return 0; }
