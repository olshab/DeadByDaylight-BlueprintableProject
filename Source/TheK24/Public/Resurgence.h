#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Resurgence.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UResurgence : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	float _healRegainPercentage;

public:
	UResurgence();
};

FORCEINLINE uint32 GetTypeHash(const UResurgence) { return 0; }
