#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "SpiritFury.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class USpiritFury : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	int32 _palletToBreakCountPerLevel;

public:
	UFUNCTION(BlueprintPure)
	int32 GetPalletToBreakCountAtLevel() const;

public:
	USpiritFury();
};

FORCEINLINE uint32 GetTypeHash(const USpiritFury) { return 0; }
