#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "K33Power_Addon_15.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK33Power_Addon_15 : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _turretRange;

public:
	UK33Power_Addon_15();
};

FORCEINLINE uint32 GetTypeHash(const UK33Power_Addon_15) { return 0; }
