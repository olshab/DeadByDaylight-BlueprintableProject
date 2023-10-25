#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "DBDTimeUtilities.generated.h"

UCLASS(Blueprintable)
class TIMEUTILITIES_API UDBDTimeUtilities : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UDBDTimeUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UDBDTimeUtilities) { return 0; }
