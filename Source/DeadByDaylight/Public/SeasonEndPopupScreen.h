#pragma once

#include "CoreMinimal.h"
#include "GenericPopupScreen.h"
#include "SeasonEndPopupScreen.generated.h"

UCLASS(Blueprintable)
class USeasonEndPopupScreen : public UGenericPopupScreen
{
	GENERATED_BODY()

public:
	USeasonEndPopupScreen();
};

FORCEINLINE uint32 GetTypeHash(const USeasonEndPopupScreen) { return 0; }
