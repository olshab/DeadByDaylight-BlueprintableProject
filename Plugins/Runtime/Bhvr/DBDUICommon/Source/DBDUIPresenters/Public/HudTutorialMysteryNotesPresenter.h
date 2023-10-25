#pragma once

#include "CoreMinimal.h"
#include "HudPresenter.h"
#include "Templates/SubclassOf.h"
#include "HudTutorialMysteryNotesPresenter.generated.h"

class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class UHudTutorialMysteryNotesPresenter : public UHudPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> CoreTutorialMysteryNoteWidget;

public:
	UHudTutorialMysteryNotesPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UHudTutorialMysteryNotesPresenter) { return 0; }
