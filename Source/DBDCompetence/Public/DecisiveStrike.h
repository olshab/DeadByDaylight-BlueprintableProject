#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "ESkillCheckCustomType.h"
#include "DecisiveStrike.generated.h"

class ADBDPlayer;
class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UDecisiveStrike : public UPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, EditFixedSize)
	float _timeAfterUnhook;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _skillCheckDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _skillCheckBuffer;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _increaseObsessionChanceEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_HasBeenAttempted, Transient, meta=(AllowPrivateAccess=true))
	bool _hasBeenAttempted;

private:
	UFUNCTION(BlueprintCallable)
	void OnUnhookedTimerEnded();

	UFUNCTION(BlueprintCallable)
	void OnSkillCheck(bool hadInput, bool success, bool bonus, ESkillCheckCustomType type, ADBDPlayer* player);

	UFUNCTION(BlueprintCallable)
	void OnRep_HasBeenAttempted();

	UFUNCTION(BlueprintCallable)
	void OnPickUpEnded(ADBDPlayer* picker);

	UFUNCTION(BlueprintCallable)
	void OnOwnerPickedUp(ADBDPlayer* picker);

	UFUNCTION(BlueprintPure)
	float GetDurationAfterUnhook() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UDecisiveStrike();
};

FORCEINLINE uint32 GetTypeHash(const UDecisiveStrike) { return 0; }
