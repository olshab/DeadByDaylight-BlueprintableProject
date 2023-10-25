#pragma once

#include "CoreMinimal.h"
#include "StoreBundlesViewInterface.h"
#include "CoreBaseUserWidget.h"
#include "CoreStoreBundlesWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreStoreBundlesWidget : public UCoreBaseUserWidget, public IStoreBundlesViewInterface
{
	GENERATED_BODY()

public:
	UCoreStoreBundlesWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreBundlesWidget) { return 0; }
