#pragma once

#include "CoreMinimal.h"
#include "PathStrategy.h"
#include "PathStrategy_Flee.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDBOTS_API UPathStrategy_Flee : public UPathStrategy
{
	GENERATED_BODY()

public:
	UPathStrategy_Flee();
};

FORCEINLINE uint32 GetTypeHash(const UPathStrategy_Flee) { return 0; }
