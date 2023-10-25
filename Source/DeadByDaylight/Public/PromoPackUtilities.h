#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PromoPackUtilities.generated.h"

UCLASS(Blueprintable)
class UPromoPackUtilities : public UObject
{
	GENERATED_BODY()

public:
	UPromoPackUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UPromoPackUtilities) { return 0; }
