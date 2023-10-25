#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "StakeOutPerk.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UStakeOutPerk : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _stakeOutStatusEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UStatusEffect* _stakeOutStatusEffect;

	UPROPERTY(EditAnywhere, EditFixedSize)
	int32 _maxTokensByLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _tokenChargeTime;

private:
	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation)
	void Server_ConsumeToken();

public:
	UFUNCTION(BlueprintCallable)
	void Local_BroadcastConsumeToken();

	UFUNCTION(BlueprintPure)
	float GetTokenChargeTime() const;

	UFUNCTION(BlueprintPure)
	float GetMaxTokensAtLevel() const;

public:
	UStakeOutPerk();
};

FORCEINLINE uint32 GetTypeHash(const UStakeOutPerk) { return 0; }
