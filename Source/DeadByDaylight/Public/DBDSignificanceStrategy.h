#pragma once

#include "CoreMinimal.h"
#include "SignificanceStrategy.h"
#include "PerPlatformProperties.h"
#include "DBDSignificanceStrategy.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UDBDSignificanceStrategy : public USignificanceStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	FPerPlatformFloat _farDistance;

	UPROPERTY(EditAnywhere)
	FPerPlatformFloat _auraRevealedMultiplier;

	UPROPERTY(EditAnywhere)
	FPerPlatformFloat _auraRevealedMinimumSignificance;

public:
	UDBDSignificanceStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UDBDSignificanceStrategy) { return 0; }
