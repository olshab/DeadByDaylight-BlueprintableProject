#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Templates/SubclassOf.h"
#include "Addon_Beartrap_RustedJaws.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UAddon_Beartrap_RustedJaws : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _mangledEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _mangledEffectLifetime;

public:
	UAddon_Beartrap_RustedJaws();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_Beartrap_RustedJaws) { return 0; }
