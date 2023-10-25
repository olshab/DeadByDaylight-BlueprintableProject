#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "TwinHuskAnimInstance.generated.h"

class APawn;
class UTwinHuskStateComponent;

UCLASS(Blueprintable, NonTransient)
class UTwinHuskAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isDeadFromSurvivorBack;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	APawn* _owningPawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UTwinHuskStateComponent* _twinHuskStateComponent;

public:
	UTwinHuskAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UTwinHuskAnimInstance) { return 0; }
