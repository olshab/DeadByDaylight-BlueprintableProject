#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BaseMenuAnimInstance.h"
#include "K28MenuAnimInstance.generated.h"

class UCustomizationAnimationSelector;

UCLASS(Blueprintable, NonTransient)
class UK28MenuAnimInstance : public UBaseMenuAnimInstance
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UCustomizationAnimationSelector> _customizationAnimationSelectorClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UCustomizationAnimationSelector* _customizationAnimationSelector;

protected:
	UFUNCTION(BlueprintPure)
	int32 GetAnimationMappingIndex() const;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void BP_OnCustomizationAnimationMappingIDChanged(int32 animationMappingIndex);

public:
	UK28MenuAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK28MenuAnimInstance) { return 0; }
