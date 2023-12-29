#pragma once

#include "CoreMinimal.h"
#include "StoreSpecialPacksHeritageViewInterface.h"
#include "CoreBaseUserWidget.h"
#include "CoreStoreSpecialPacksHeritageTabWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCoreStoreSpecialPacksHeritageTabWidget : public UCoreBaseUserWidget, public IStoreSpecialPacksHeritageViewInterface
{
	GENERATED_BODY()

public:
	UCoreStoreSpecialPacksHeritageTabWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreSpecialPacksHeritageTabWidget) { return 0; }
