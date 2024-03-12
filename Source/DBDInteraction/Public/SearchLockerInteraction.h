#pragma once

#include "CoreMinimal.h"
#include "BaseLockerInteraction.h"
#include "SearchLockerInteraction.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DBDINTERACTION_API USearchLockerInteraction : public UBaseLockerInteraction
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _possibleWhenOccupied;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _killerFacingLockerToleranceAngle;

public:
	USearchLockerInteraction();
};

FORCEINLINE uint32 GetTypeHash(const USearchLockerInteraction) { return 0; }
