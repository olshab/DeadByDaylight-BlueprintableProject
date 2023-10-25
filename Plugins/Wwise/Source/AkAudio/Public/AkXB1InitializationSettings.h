#pragma once

#include "CoreMinimal.h"
#include "AkXboxOneGDKInitializationSettings.h"
#include "AkXB1InitializationSettings.generated.h"

UCLASS(Blueprintable)
class AKAUDIO_API UAkXB1InitializationSettings : public UAkXboxOneGDKInitializationSettings
{
	GENERATED_BODY()

public:
	UAkXB1InitializationSettings();
};

FORCEINLINE uint32 GetTypeHash(const UAkXB1InitializationSettings) { return 0; }
