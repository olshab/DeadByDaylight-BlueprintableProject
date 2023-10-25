#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "ETheMettleOfManPhase.h"
#include "TheMettleOfMan.generated.h"

class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UTheMettleOfMan : public UPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, EditFixedSize)
	int32 _tokenNeededToActivate;

	UPROPERTY(EditAnywhere, EditFixedSize)
	float _revealOutsideRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _mustBeInjured;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _enduranceHighlightEffectClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_NumTokenSoFar, Transient, meta=(AllowPrivateAccess=true))
	int32 _numTokenSoFar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_CurrentPhase, Transient, meta=(AllowPrivateAccess=true))
	ETheMettleOfManPhase _currentPhase;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UStatusEffect* _revealToKillerEffect;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_NumTokenSoFar();

	UFUNCTION(BlueprintCallable)
	void OnRep_CurrentPhase();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UTheMettleOfMan();
};

FORCEINLINE uint32 GetTypeHash(const UTheMettleOfMan) { return 0; }
