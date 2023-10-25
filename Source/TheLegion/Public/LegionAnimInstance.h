#pragma once

#include "CoreMinimal.h"
#include "KillerAnimInstance.h"
#include "LegionAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ULegionAnimInstance : public UKillerAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isFrenzy;

public:
	ULegionAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const ULegionAnimInstance) { return 0; }
