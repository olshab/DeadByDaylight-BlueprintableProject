#pragma once

#include "CoreMinimal.h"
#include "GeneratorTrapPerk.h"
#include "Templates/SubclassOf.h"
#include "S32P01.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class US32P01 : public UGeneratorTrapPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _generatorRevealRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _revealEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UStatusEffect* _revealStatus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsKillerInRange, meta=(AllowPrivateAccess=true))
	bool _isKillerInRange;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_IsKillerInRange();

public:
	UFUNCTION(BlueprintPure)
	float GetGeneratorRevealRange() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	US32P01();
};

FORCEINLINE uint32 GetTypeHash(const US32P01) { return 0; }
