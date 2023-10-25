#pragma once

#include "CoreMinimal.h"
#include "BoonPerk.h"
#include "S29P03.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class US29P03 : public UBoonPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	float _recoverSpeedPercentage;

public:
	US29P03();
};

FORCEINLINE uint32 GetTypeHash(const US29P03) { return 0; }
