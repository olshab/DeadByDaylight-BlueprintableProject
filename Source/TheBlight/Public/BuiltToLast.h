#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "BuiltToLast.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UBuiltToLast : public UPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	float _refillPercentage;

	UPROPERTY(EditAnywhere)
	float _hideDuration;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, Transient, meta=(AllowPrivateAccess=true))
	uint8 _numberOfTimesPerkTriggered;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void OnBuiltToLastTrigger_Cosmetic();

public:
	UFUNCTION(BlueprintPure)
	float GetRefillPercentageByLevel() const;

	UFUNCTION(BlueprintPure)
	float GetHideDurationByLevel() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UBuiltToLast();
};

FORCEINLINE uint32 GetTypeHash(const UBuiltToLast) { return 0; }
