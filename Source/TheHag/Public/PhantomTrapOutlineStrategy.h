#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SourceBasedOutlineUpdateStrategy.h"
#include "PhantomTrapOutlineStrategy.generated.h"

class APhantomTrap;
class UCurveFloat;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UPhantomTrapOutlineStrategy : public USourceBasedOutlineUpdateStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, Transient)
	TWeakObjectPtr<APhantomTrap> _cachedOwningPhantomTrap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FLinearColor _colorWhenTeleportationIsAvailable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UCurveFloat* _colorAlphaBasedOnDistance;

public:
	UPhantomTrapOutlineStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UPhantomTrapOutlineStrategy) { return 0; }
