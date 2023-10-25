#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "OniCustomizationItemAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UOniCustomizationItemAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isInDemonMode;

private:
	UFUNCTION(BlueprintCallable)
	void SetIsInDemonMode(const bool isInDemonMode);

public:
	UOniCustomizationItemAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UOniCustomizationItemAnimInstance) { return 0; }
