#pragma once

#include "CoreMinimal.h"
#include "KillerAnimInstance.h"
#include "Templates/SubclassOf.h"
#include "K28AnimInstance.generated.h"

class UCustomizationAnimationSelector;

UCLASS(Blueprintable, NonTransient)
class UK28AnimInstance : public UKillerAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isInLocker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isInChase;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isChargingTeleportation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _hasTeleportationPowerCharged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _hasTeleportationBeenCancelled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _hideHandsInFPV;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UCustomizationAnimationSelector> _customizationAnimationSelectorClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UCustomizationAnimationSelector* _customizationAnimationSelector;

protected:
	UFUNCTION(BlueprintPure)
	TArray<FName> GetCustomAnimationTags() const;

	UFUNCTION(BlueprintPure)
	int32 GetAnimationMappingIndex() const;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void BP_OnCustomizationAnimationMappingIDChanged(int32 animationMappingIndex);

public:
	UK28AnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK28AnimInstance) { return 0; }
