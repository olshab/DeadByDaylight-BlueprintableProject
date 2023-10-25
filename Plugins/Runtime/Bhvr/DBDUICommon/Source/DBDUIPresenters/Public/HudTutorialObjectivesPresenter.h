#pragma once

#include "CoreMinimal.h"
#include "HudPresenter.h"
#include "Templates/SubclassOf.h"
#include "HudTutorialObjectivesPresenter.generated.h"

class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class UHudTutorialObjectivesPresenter : public UHudPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> TutorialObjectivesWidgetClass;

private:
	UFUNCTION(BlueprintCallable)
	bool IsInTutorial() const;

public:
	UHudTutorialObjectivesPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UHudTutorialObjectivesPresenter) { return 0; }
