#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Templates/SubclassOf.h"
#include "K30BaseStatusEffectAddon.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK30BaseStatusEffectAddon : public UItemAddon
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<UStatusEffect>> _baseStatusEffectClasses;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _lifetime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _customParam;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _shouldDisplay;

public:
	UK30BaseStatusEffectAddon();
};

FORCEINLINE uint32 GetTypeHash(const UK30BaseStatusEffectAddon) { return 0; }
