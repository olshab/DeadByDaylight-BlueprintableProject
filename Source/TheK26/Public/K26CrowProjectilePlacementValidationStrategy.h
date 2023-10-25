#pragma once

#include "CoreMinimal.h"
#include "RestrictedPlacementAreaStrategy.h"
#include "K26CrowProjectilePlacementValidationStrategy.generated.h"

class UK26AmmoHandlerComponent;

UCLASS(Blueprintable, EditInlineNew)
class UK26CrowProjectilePlacementValidationStrategy : public URestrictedPlacementAreaStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UK26AmmoHandlerComponent* _ammoHandler;

public:
	UK26CrowProjectilePlacementValidationStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UK26CrowProjectilePlacementValidationStrategy) { return 0; }
