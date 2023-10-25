#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DateTimeProvider.generated.h"

UCLASS(Blueprintable, Abstract)
class SYSTEMUTILITIES_API UDateTimeProvider : public UObject
{
	GENERATED_BODY()

public:
	UDateTimeProvider();
};

FORCEINLINE uint32 GetTypeHash(const UDateTimeProvider) { return 0; }
