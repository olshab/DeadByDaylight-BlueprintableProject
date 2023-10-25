#pragma once

#include "CoreMinimal.h"
#include "OnEventBaseAddon.h"
#include "Templates/SubclassOf.h"
#include "ShopLubricantAddon.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UShopLubricantAddon : public UOnEventBaseAddon
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _auraBlockingDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _auraVisibleDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UStatusEffect> _hiddenFromOtherSurvivorsWhileDyingEffectClass;

public:
	UShopLubricantAddon();
};

FORCEINLINE uint32 GetTypeHash(const UShopLubricantAddon) { return 0; }
