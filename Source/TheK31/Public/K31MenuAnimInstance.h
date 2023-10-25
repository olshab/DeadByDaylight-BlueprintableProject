#pragma once

#include "CoreMinimal.h"
#include "BaseMenuAnimInstance.h"
#include "K31MenuAnimInstance.generated.h"

class UCustomizationAnimationSelector;

UCLASS(Blueprintable, NonTransient)
class THEK31_API UK31MenuAnimInstance : public UBaseMenuAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCustomizationAnimationSelector* _animationSelector;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnCustomizationAnimationMappingIDChanged(int32 animationMappingIndex);

public:
	UFUNCTION(BlueprintPure)
	int32 GetCustomizationMappingID() const;

	UFUNCTION(BlueprintPure)
	TArray<FName> GetCustoAnimTags() const;

public:
	UK31MenuAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK31MenuAnimInstance) { return 0; }
