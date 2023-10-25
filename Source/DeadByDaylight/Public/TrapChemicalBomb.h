#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ETrapBombState.h"
#include "TrapChemicalBomb.generated.h"

class APallet;
class ADBDPlayer;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API ATrapChemicalBomb : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_CurrentState, meta=(AllowPrivateAccess=true))
	ETrapBombState _currentState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADBDPlayer* _trapPlacer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	APallet* _placedPallet;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_CurrentState();

public:
	UFUNCTION(BlueprintPure)
	ADBDPlayer* GetTrapPlacer() const;

	UFUNCTION(BlueprintPure)
	ETrapBombState GetState() const;

	UFUNCTION(BlueprintPure)
	APallet* GetPallet() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ATrapChemicalBomb();
};

FORCEINLINE uint32 GetTypeHash(const ATrapChemicalBomb) { return 0; }
