#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Templates/SubclassOf.h"
#include "Addon_TheBlight_18.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UAddon_TheBlight_18 : public UItemAddon
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UStatusEffect> _blightUndetectableEffect;

public:
	UAddon_TheBlight_18();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_TheBlight_18) { return 0; }
