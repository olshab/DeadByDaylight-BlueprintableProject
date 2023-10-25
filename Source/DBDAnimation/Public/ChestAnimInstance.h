#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ChestAnimInstance.generated.h"

class ADBDPlayer;
class ASearchable;
class UInteractionDefinition;

UCLASS(Blueprintable, NonTransient)
class DBDANIMATION_API UChestAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ASearchable* _owningChest;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isOpen;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isBeingPriedOpen;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UInteractionDefinition* _openChestInteraction;

private:
	UFUNCTION(BlueprintCallable)
	void OnSearchedChanged(bool searched);

	UFUNCTION(BlueprintCallable)
	void OnBeingPriedOpenStopped();

	UFUNCTION(BlueprintCallable)
	void OnBeingPriedOpenStarted(ADBDPlayer* player);

public:
	UChestAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UChestAnimInstance) { return 0; }
