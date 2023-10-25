#pragma once

#include "CoreMinimal.h"
#include "OnEventBaseAddon.h"
#include "Templates/SubclassOf.h"
#include "Addon_K27Power_16.generated.h"

class UK27Addon_16_ScreamRevealComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UAddon_K27Power_16 : public UOnEventBaseAddon
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _distanceOfSightFromSurvivorToKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _survivorScreamRevealDuration;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UK27Addon_16_ScreamRevealComponent> _screamRevealComponentClass;

	UPROPERTY(EditAnywhere, Transient, Export)
	TArray<TWeakObjectPtr<UK27Addon_16_ScreamRevealComponent>> _cachedScreamRevealComponents;

public:
	UAddon_K27Power_16();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_K27Power_16) { return 0; }
