#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "StoreCharactersBioViewInterface.h"
#include "CoreStoreCharactersBioWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreStoreCharactersBioWidget : public UCoreBaseUserWidget, public IStoreCharactersBioViewInterface
{
	GENERATED_BODY()

public:
	UCoreStoreCharactersBioWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreCharactersBioWidget) { return 0; }
