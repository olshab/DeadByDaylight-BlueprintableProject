#pragma once

#include "CoreMinimal.h"
#include "AccessoryLoadingData.generated.h"

class UAccessory;

USTRUCT(BlueprintType)
struct FAccessoryLoadingData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export)
	UAccessory* Accessory;

public:
	DEADBYDAYLIGHT_API FAccessoryLoadingData();
};

FORCEINLINE uint32 GetTypeHash(const FAccessoryLoadingData) { return 0; }
