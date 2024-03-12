#pragma once

#include "CoreMinimal.h"
#include "OnEventBaseAddon.h"
#include "Templates/SubclassOf.h"
#include "Addon_Hillbilly_18.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UAddon_Hillbilly_18 : public UOnEventBaseAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _undetectableStatusEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UStatusEffect* _undetectableStatusEffect;

public:
	UAddon_Hillbilly_18();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_Hillbilly_18) { return 0; }
