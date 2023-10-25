#pragma once

#include "CoreMinimal.h"
#include "GenericPopupScreen.h"
#include "ArchivePassPurchasePopupScreen.generated.h"

UCLASS(Blueprintable)
class UArchivePassPurchasePopupScreen : public UGenericPopupScreen
{
	GENERATED_BODY()

public:
	UArchivePassPurchasePopupScreen();
};

FORCEINLINE uint32 GetTypeHash(const UArchivePassPurchasePopupScreen) { return 0; }
