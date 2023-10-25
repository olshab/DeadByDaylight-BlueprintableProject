#pragma once

#include "CoreMinimal.h"
#include "KillerAnimInstance.h"
#include "ShapeAnimInstance.generated.h"

class UEvilWithinComponent;

UCLASS(Blueprintable, NonTransient)
class UShapeAnimInstance : public UKillerAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isTier3Active;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UEvilWithinComponent* _evilWithinComponent;

public:
	UShapeAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UShapeAnimInstance) { return 0; }
