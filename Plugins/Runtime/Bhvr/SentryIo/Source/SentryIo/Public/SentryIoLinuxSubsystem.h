#pragma once

#include "CoreMinimal.h"
#include "SentryIoBaseSubsystem.h"
#include "SentryIoLinuxSubsystem.generated.h"

UCLASS(Blueprintable)
class SENTRYIO_API USentryIoLinuxSubsystem : public USentryIoBaseSubsystem
{
	GENERATED_BODY()

public:
	USentryIoLinuxSubsystem();
};

FORCEINLINE uint32 GetTypeHash(const USentryIoLinuxSubsystem) { return 0; }
