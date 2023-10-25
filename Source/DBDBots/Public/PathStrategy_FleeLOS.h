#pragma once

#include "CoreMinimal.h"
#include "PathStrategy_Flee.h"
#include "PathStrategy_FleeLOS.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDBOTS_API UPathStrategy_FleeLOS : public UPathStrategy_Flee
{
	GENERATED_BODY()

public:
	UPathStrategy_FleeLOS();
};

FORCEINLINE uint32 GetTypeHash(const UPathStrategy_FleeLOS) { return 0; }
