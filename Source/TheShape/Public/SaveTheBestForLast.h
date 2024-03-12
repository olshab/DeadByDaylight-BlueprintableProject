#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "SaveTheBestForLast.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class USaveTheBestForLast : public UPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TokensLostOnHit;

private:
	UPROPERTY(EditAnywhere)
	int32 _maxTokens;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _cooldownPerToken;

public:
	UFUNCTION(BlueprintPure)
	float GetCooldownPerToken() const;

public:
	USaveTheBestForLast();
};

FORCEINLINE uint32 GetTypeHash(const USaveTheBestForLast) { return 0; }
