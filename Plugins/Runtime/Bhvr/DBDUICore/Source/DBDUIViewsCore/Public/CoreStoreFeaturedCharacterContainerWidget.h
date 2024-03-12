#pragma once

#include "CoreMinimal.h"
#include "CoreButtonSelector.h"
#include "Templates/SubclassOf.h"
#include "EPlayerRole.h"
#include "CoreStoreFeaturedCharacterContainerWidget.generated.h"

class UHorizontalBox;
class UCoreStoreFeaturedCharacterWidget;

UCLASS(Blueprintable, EditInlineNew)
class UCoreStoreFeaturedCharacterContainerWidget : public UCoreButtonSelector
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UCoreStoreFeaturedCharacterWidget> CharacterTileClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UHorizontalBox* Root;

private:
	UFUNCTION(BlueprintCallable)
	void OnMoveToCharactersBioPageRequested(int32 characterIndex, EPlayerRole playerRole);

public:
	UCoreStoreFeaturedCharacterContainerWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreFeaturedCharacterContainerWidget) { return 0; }
