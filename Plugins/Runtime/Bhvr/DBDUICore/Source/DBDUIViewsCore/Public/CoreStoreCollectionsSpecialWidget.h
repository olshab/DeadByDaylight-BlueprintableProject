#pragma once

#include "CoreMinimal.h"
#include "StoreCollectionsSpecialViewInterface.h"
#include "CoreBaseUserWidget.h"
#include "CoreStoreCollectionsSpecialWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCoreStoreCollectionsSpecialWidget : public UCoreBaseUserWidget, public IStoreCollectionsSpecialViewInterface
{
	GENERATED_BODY()

public:
	UCoreStoreCollectionsSpecialWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreCollectionsSpecialWidget) { return 0; }
