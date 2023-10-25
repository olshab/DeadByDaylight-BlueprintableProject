#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "K29P01.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK29P01 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _survivorVaultRushedEventRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _cooldownTime;

public:
	UFUNCTION(BlueprintPure)
	float GetSurvivorVaultRushedEventRange() const;

public:
	UK29P01();
};

FORCEINLINE uint32 GetTypeHash(const UK29P01) { return 0; }
