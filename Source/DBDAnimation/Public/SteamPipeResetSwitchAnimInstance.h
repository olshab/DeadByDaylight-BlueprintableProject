#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "SteamPipeResetSwitchAnimInstance.generated.h"

class ASteamPipeResetSwitch;

UCLASS(Blueprintable, NonTransient)
class DBDANIMATION_API USteamPipeResetSwitchAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _handleIsDown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ASteamPipeResetSwitch* _resetSwitch;

public:
	USteamPipeResetSwitchAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const USteamPipeResetSwitchAnimInstance) { return 0; }
