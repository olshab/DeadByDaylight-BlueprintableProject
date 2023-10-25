#pragma once

#include "CoreMinimal.h"
#include "DBDGameState.h"
#include "TestDBDGameState.generated.h"

UCLASS(Blueprintable)
class ATestDBDGameState : public ADBDGameState
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_DELEGATE(FOnIntroCompleteDelegate);

	DECLARE_DYNAMIC_DELEGATE(FOnLevelReadyToPlayDelegate);

public:
	ATestDBDGameState();
};

FORCEINLINE uint32 GetTypeHash(const ATestDBDGameState) { return 0; }
