#pragma once

#include "CoreMinimal.h"
#include "HudPresenter.h"
#include "Templates/SubclassOf.h"
#include "ExamplePresenter.generated.h"

class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIPRESENTERS_API UExamplePresenter : public UHudPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> ExampleWidgetClass;

private:
	UFUNCTION(BlueprintCallable)
	void OnButtonClick();

public:
	UExamplePresenter();
};

FORCEINLINE uint32 GetTypeHash(const UExamplePresenter) { return 0; }
