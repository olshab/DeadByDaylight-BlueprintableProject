#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "TrailOfTorment.generated.h"

class UStatusEffect;
class AGenerator;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UTrailOfTorment : public UPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UStatusEffect> _trailOfTormentEffect;

private:
	UPROPERTY(EditAnywhere)
	float _cooldownDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 _highlightPriority;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_HighlightGenerator, Transient, meta=(AllowPrivateAccess=true))
	AGenerator* _highlightedGenerator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UStatusEffect* _statusEffect;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_HighlightGenerator(const AGenerator* oldHighlightedGenerator) const;

public:
	UFUNCTION(BlueprintPure)
	float GetCooldownDurationAtLevel() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UTrailOfTorment();
};

FORCEINLINE uint32 GetTypeHash(const UTrailOfTorment) { return 0; }
