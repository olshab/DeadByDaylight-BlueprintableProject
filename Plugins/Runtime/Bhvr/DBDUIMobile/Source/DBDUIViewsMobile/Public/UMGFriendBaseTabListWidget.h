#pragma once

#include "CoreMinimal.h"
#include "UMGBaseTabListWidget.h"
#include "UMGFriendBaseTabListWidget.generated.h"

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGFriendBaseTabListWidget : public UUMGBaseTabListWidget
{
	GENERATED_BODY()

public:
	UUMGFriendBaseTabListWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGFriendBaseTabListWidget) { return 0; }
