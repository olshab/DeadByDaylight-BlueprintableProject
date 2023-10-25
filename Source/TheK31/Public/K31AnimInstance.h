#pragma once

#include "CoreMinimal.h"
#include "KillerAnimInstance.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"
#include "K31AnimInstance.generated.h"

class UCustomizationAnimationSelector;

UCLASS(Blueprintable, NonTransient)
class UK31AnimInstance : public UKillerAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isInspecting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isDeployingADrone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isReceivingADronePassively;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isRecallingADrone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isActivatingADrone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCustomizationAnimationSelector* _animationSelector;

protected:
	UFUNCTION(BlueprintCallable)
	void ResetIsReceivingADronePassively();

	UFUNCTION(BlueprintCallable)
	void ResetIsRecallingADrone();

	UFUNCTION(BlueprintCallable)
	void ResetIsDeployingADrone();

	UFUNCTION(BlueprintCallable)
	void ResetIsActivatingADrone();

private:
	UFUNCTION()
	void OnGameEventReceived(const FGameplayTag gameplayTag, const FGameEventData& gameEventData);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnCustomizationAnimationMappingIDChanged(int32 animationMappingIndex);

public:
	UFUNCTION(BlueprintPure)
	int32 GetCustomizationMappingID() const;

	UFUNCTION(BlueprintPure)
	TArray<FName> GetCustoAnimTags() const;

public:
	UK31AnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK31AnimInstance) { return 0; }
