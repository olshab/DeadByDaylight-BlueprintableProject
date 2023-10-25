#pragma once

#include "CoreMinimal.h"
#include "HexPerk.h"
#include "HexBloodFavor.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UHexBloodFavor : public UHexPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	float _palletInRange;

	UPROPERTY(EditAnywhere)
	float _palletPulldownBlockTime;

public:
	UFUNCTION(BlueprintPure)
	float GetPalletPulldownBlockTimeAtLevel() const;

	UFUNCTION(BlueprintPure)
	float GetPalletInRangeAtLevel() const;

public:
	UHexBloodFavor();
};

FORCEINLINE uint32 GetTypeHash(const UHexBloodFavor) { return 0; }
