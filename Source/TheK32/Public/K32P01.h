#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "K32P01.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK32P01 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _K32P01ExhaustedStatusEffect;

	UPROPERTY(EditAnywhere)
	float _exhaustionDuration;

public:
	UFUNCTION(BlueprintPure)
	float GetExhaustionDurationAtLevel() const;

public:
	UK32P01();
};

FORCEINLINE uint32 GetTypeHash(const UK32P01) { return 0; }
