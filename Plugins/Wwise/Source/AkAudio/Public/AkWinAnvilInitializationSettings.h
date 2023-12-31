#pragma once

#include "CoreMinimal.h"
#include "AkWinGDKInitializationSettings.h"
#include "AkWinAnvilInitializationSettings.generated.h"

UCLASS(Blueprintable)
class AKAUDIO_API UAkWinAnvilInitializationSettings : public UAkWinGDKInitializationSettings
{
	GENERATED_BODY()

public:
	UAkWinAnvilInitializationSettings();
};

FORCEINLINE uint32 GetTypeHash(const UAkWinAnvilInitializationSettings) { return 0; }
