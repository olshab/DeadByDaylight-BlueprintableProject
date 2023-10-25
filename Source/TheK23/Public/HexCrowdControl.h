#pragma once

#include "CoreMinimal.h"
#include "HexPerk.h"
#include "HexCrowdControl.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UHexCrowdControl : public UHexPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	float _windowVaultBlockDuration;

public:
	UHexCrowdControl();
};

FORCEINLINE uint32 GetTypeHash(const UHexCrowdControl) { return 0; }
