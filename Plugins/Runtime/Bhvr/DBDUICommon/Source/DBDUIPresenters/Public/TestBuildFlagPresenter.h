#pragma once

#include "CoreMinimal.h"
#include "Presenter.h"
#include "Templates/SubclassOf.h"
#include "ETestBuildFlagPosition.h"
#include "TestBuildFlagPresenter.generated.h"

class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class UTestBuildFlagPresenter : public UPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> TestBuildFlagWidgetClass;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ETestBuildFlagPosition testBuildFlagPosition;

public:
	UTestBuildFlagPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UTestBuildFlagPresenter) { return 0; }
