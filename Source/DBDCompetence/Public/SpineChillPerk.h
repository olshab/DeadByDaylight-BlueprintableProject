#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "SpineChillPerk.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class USpineChillPerk : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _spineChillEffectClass;

	UPROPERTY(EditAnywhere, EditFixedSize)
	float _actionSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _lingerDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _range;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _precisionAngleDegrees;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Replicated, meta=(AllowPrivateAccess=true))
	bool _isInRange;

public:
	UFUNCTION(BlueprintPure)
	bool IsLookingTowards() const;

	UFUNCTION(BlueprintPure)
	bool IsInRange() const;

	UFUNCTION(BlueprintPure)
	bool HasLineOfSight() const;

	UFUNCTION(BlueprintPure)
	float GetRange() const;

	UFUNCTION(BlueprintPure)
	float GetLingerDuration() const;

private:
	UFUNCTION(BlueprintCallable)
	void Authority_OnIsLookingTowardsChanged(const bool isLookingTowards);

	UFUNCTION(BlueprintCallable)
	void Authority_OnIsInLineOfSightChanged(const bool isInLineOfSight);

	UFUNCTION(BlueprintCallable)
	void Authority_OnInRangeChanged(const bool inRange);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	USpineChillPerk();
};

FORCEINLINE uint32 GetTypeHash(const USpineChillPerk) { return 0; }
