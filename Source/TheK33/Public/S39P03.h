#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "S39P03.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class US39P03 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	float _perkCooldownTime;

public:
	US39P03();
};

FORCEINLINE uint32 GetTypeHash(const US39P03) { return 0; }
