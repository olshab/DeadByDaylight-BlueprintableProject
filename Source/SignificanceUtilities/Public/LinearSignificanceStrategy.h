#pragma once

#include "CoreMinimal.h"
#include "SignificanceStrategy.h"
#include "PerPlatformProperties.h"
#include "LinearSignificanceStrategy.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ULinearSignificanceStrategy : public USignificanceStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	FPerPlatformFloat _maxDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _updateEvenIfNotRendered;

public:
	ULinearSignificanceStrategy();
};

FORCEINLINE uint32 GetTypeHash(const ULinearSignificanceStrategy) { return 0; }
