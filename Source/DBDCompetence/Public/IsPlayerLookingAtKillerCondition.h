#pragma once

#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "IsPlayerLookingAtKillerCondition.generated.h"

class APawn;
class AController;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UIsPlayerLookingAtKillerCondition : public UEventDrivenModifierCondition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _precisionAngleDegrees;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsLookingTowards, meta=(AllowPrivateAccess=true))
	bool _isLookingTowards;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_IsLookingTowards(const bool isLookingTowards);

	UFUNCTION(BlueprintCallable)
	void OnPawnControllerChanged(APawn* pawn, AController* controller);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UIsPlayerLookingAtKillerCondition();
};

FORCEINLINE uint32 GetTypeHash(const UIsPlayerLookingAtKillerCondition) { return 0; }
