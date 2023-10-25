#pragma once

#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "EnvQueryContext_EscapeDoors.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDBOTS_API UEnvQueryContext_EscapeDoors : public UEnvQueryContext
{
	GENERATED_BODY()

public:
	UEnvQueryContext_EscapeDoors();
};

FORCEINLINE uint32 GetTypeHash(const UEnvQueryContext_EscapeDoors) { return 0; }
