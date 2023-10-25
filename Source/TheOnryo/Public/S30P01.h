#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "S30P01.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class US30P01 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	float _perkEffectActiveDuration;

public:
	US30P01();
};

FORCEINLINE uint32 GetTypeHash(const US30P01) { return 0; }
