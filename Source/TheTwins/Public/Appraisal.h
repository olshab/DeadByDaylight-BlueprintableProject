#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Appraisal.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UAppraisal : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	float _chestSearchSpeedMultiplier;

public:
	UAppraisal();
};

FORCEINLINE uint32 GetTypeHash(const UAppraisal) { return 0; }
