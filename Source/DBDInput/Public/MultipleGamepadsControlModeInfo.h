#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "MultipleGamepadsControlModeInfo.generated.h"

UCLASS(Blueprintable)
class DBDINPUT_API UMultipleGamepadsControlModeInfo : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UMultipleGamepadsControlModeInfo();
};

FORCEINLINE uint32 GetTypeHash(const UMultipleGamepadsControlModeInfo) { return 0; }
