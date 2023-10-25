#pragma once

#include "CoreMinimal.h"
#include "DefaultObjectPlacementValidationStrategy.h"
#include "ObjectPlacementValidationWithRestrictionStrategy.generated.h"

class URestrictedPlacementAreaStrategy;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UObjectPlacementValidationWithRestrictionStrategy : public UDefaultObjectPlacementValidationStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	TArray<URestrictedPlacementAreaStrategy*> _restrictedAreas;

protected:
	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

public:
	UObjectPlacementValidationWithRestrictionStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UObjectPlacementValidationWithRestrictionStrategy) { return 0; }
