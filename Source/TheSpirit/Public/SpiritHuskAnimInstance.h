#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "SpiritHuskAnimInstance.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable, NonTransient)
class USpiritHuskAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidgetOptional))
	USkeletalMeshComponent* _killerMesh;

public:
	USpiritHuskAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const USpiritHuskAnimInstance) { return 0; }
