#pragma once

#include "CoreMinimal.h"
#include "ECharacterMovementTypes.h"
#include "EAIDifficultyLevel.h"
#include "AIController.h"
#include "Templates/SubclassOf.h"
#include "EPawnInputPressTypes.h"
#include "DBDAIController.generated.h"

class UObject;
class APawn;
class UNavigationQueryFilter;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API ADBDAIController : public AAIController
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DefaultSightRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CloakedTargetSightRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EAIDifficultyLevel, int32> AIDifficultyMaxPlayerRanks;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	APawn* _aiPawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	APawn* _lastAiPawn;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<UObject*, float> _contextualPathSpeedFactors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UObject* _objOverridingDefaultNavigationFilter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TSubclassOf<UNavigationQueryFilter> _originalDefaultNavigationFilter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<EPawnInputPressTypes, UObject*> _inputLocks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UObject* _movementLock;

public:
	UFUNCTION(BlueprintCallable)
	void UseItemRequest(const UObject* requester);

	UFUNCTION(BlueprintCallable)
	void StruggleRequest(const UObject* requester, float input);

	UFUNCTION(BlueprintCallable)
	bool SetCharacterMovement(ECharacterMovementTypes movementTypes, const UObject* requester);

private:
	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation)
	void Server_SetAIPlayerRank(int32 playerRank);

public:
	UFUNCTION(BlueprintCallable)
	void SecondAttackRequest(const UObject* requester);

	UFUNCTION(BlueprintCallable)
	void SecondaryActionRequest(const UObject* requester);

	UFUNCTION(BlueprintCallable)
	void RunRequest(const UObject* requester);

	UFUNCTION(BlueprintCallable)
	void InteractRequestRelease(const UObject* requester);

	UFUNCTION(BlueprintCallable)
	void InteractRequest(const UObject* requester);

	UFUNCTION(BlueprintCallable)
	void Gesture04Request(const UObject* requester);

	UFUNCTION(BlueprintCallable)
	void Gesture03Request(const UObject* requester);

	UFUNCTION(BlueprintCallable)
	void Gesture02Request(const UObject* requester);

	UFUNCTION(BlueprintCallable)
	void Gesture01Request(const UObject* requester);

	UFUNCTION(BlueprintCallable)
	void FastInteractRequest(const UObject* requester);

	UFUNCTION(BlueprintCallable)
	void EndUseItemRequest(const UObject* requester);

	UFUNCTION(BlueprintCallable)
	void EndSecondAttackRequest(const UObject* requester);

	UFUNCTION(BlueprintCallable)
	void EndRunRequest(const UObject* requester);

	UFUNCTION(BlueprintCallable)
	void EndInteractRequest(const UObject* requester);

	UFUNCTION(BlueprintCallable)
	void EndFastInteractRequest(const UObject* requester);

	UFUNCTION(BlueprintCallable)
	void EndDropItemRequest(const UObject* requester);

	UFUNCTION(BlueprintCallable)
	void EndActionRequest(const UObject* requester);

	UFUNCTION(BlueprintCallable)
	void EndAbilityTwoRequest(const UObject* requester);

	UFUNCTION(BlueprintCallable)
	void DropItemRequest(const UObject* requester);

	UFUNCTION(BlueprintCallable)
	void CancelMinigameRequest(const UObject* requester);

	UFUNCTION(BlueprintCallable)
	void AttackRequest(const UObject* requester);

	UFUNCTION(BlueprintCallable)
	void ActionRequest(const UObject* requester);

	UFUNCTION(BlueprintCallable)
	void AbilityTwoRequest(const UObject* requester);

public:
	ADBDAIController();
};

FORCEINLINE uint32 GetTypeHash(const ADBDAIController) { return 0; }
