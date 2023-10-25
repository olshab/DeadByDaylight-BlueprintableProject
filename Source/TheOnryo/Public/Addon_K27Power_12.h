#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Addon_K27Power_12.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UAddon_K27Power_12 : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _condemnStackNumber;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _onlyGiveStackForHealingFromInjuredToHealthy;

public:
	UAddon_K27Power_12();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_K27Power_12) { return 0; }
