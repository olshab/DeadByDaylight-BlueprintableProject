#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "PopGoesTheWeasel.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UPopGoesTheWeasel : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, EditFixedSize)
	float _activePerkDuration;

public:
	UFUNCTION(BlueprintPure)
	float GetActivePerkDurationAtLevel() const;

public:
	UPopGoesTheWeasel();
};

FORCEINLINE uint32 GetTypeHash(const UPopGoesTheWeasel) { return 0; }
