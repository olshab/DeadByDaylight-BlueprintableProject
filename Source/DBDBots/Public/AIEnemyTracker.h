#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AIEnemyTracker.generated.h"

UCLASS(Blueprintable, Abstract)
class DBDBOTS_API UAIEnemyTracker : public UObject
{
	GENERATED_BODY()

public:
	UAIEnemyTracker();
};

FORCEINLINE uint32 GetTypeHash(const UAIEnemyTracker) { return 0; }
