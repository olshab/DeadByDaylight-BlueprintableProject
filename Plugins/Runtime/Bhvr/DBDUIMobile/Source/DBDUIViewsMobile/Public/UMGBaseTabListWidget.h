#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGBaseTabListWidget.generated.h"

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGBaseTabListWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	UUMGBaseTabListWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGBaseTabListWidget) { return 0; }
