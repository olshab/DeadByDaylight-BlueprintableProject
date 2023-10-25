#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Addon_TheBlight_13.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UAddon_TheBlight_13 : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _speedIncreasePerDash;

public:
	UAddon_TheBlight_13();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_TheBlight_13) { return 0; }
