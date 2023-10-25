#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "CrowAnimInstance.generated.h"

class UWorldRunawayMeshComponent;

UCLASS(Blueprintable, NonTransient)
class DBDANIMATION_API UCrowAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _shouldTakeOff;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UWorldRunawayMeshComponent* _crow;

public:
	UCrowAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UCrowAnimInstance) { return 0; }
