#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "DBDTextManager.generated.h"

UCLASS(Blueprintable)
class DBDUIMANAGERS_API UDBDTextManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	bool GetLargeTextEnabled() const;

public:
	UDBDTextManager();
};

FORCEINLINE uint32 GetTypeHash(const UDBDTextManager) { return 0; }
