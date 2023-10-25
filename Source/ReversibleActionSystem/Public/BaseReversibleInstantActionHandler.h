#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BaseReversibleInstantActionHandler.generated.h"

UCLASS(Blueprintable, Abstract)
class REVERSIBLEACTIONSYSTEM_API UBaseReversibleInstantActionHandler : public UObject
{
	GENERATED_BODY()

public:
	UBaseReversibleInstantActionHandler();
};

FORCEINLINE uint32 GetTypeHash(const UBaseReversibleInstantActionHandler) { return 0; }
