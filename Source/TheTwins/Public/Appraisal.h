#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "Appraisal.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UAppraisal : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	float _chestSearchSpeedMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _fastChestSearchEffectClass;

public:
	UAppraisal();
};

FORCEINLINE uint32 GetTypeHash(const UAppraisal) { return 0; }
