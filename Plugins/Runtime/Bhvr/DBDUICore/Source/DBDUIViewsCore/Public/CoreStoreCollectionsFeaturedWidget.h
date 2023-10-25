#pragma once

#include "CoreMinimal.h"
#include "StoreCollectionsFeaturedViewInterface.h"
#include "CoreBaseUserWidget.h"
#include "CoreStoreCollectionsFeaturedWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCoreStoreCollectionsFeaturedWidget : public UCoreBaseUserWidget, public IStoreCollectionsFeaturedViewInterface
{
	GENERATED_BODY()

public:
	UCoreStoreCollectionsFeaturedWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreCollectionsFeaturedWidget) { return 0; }
