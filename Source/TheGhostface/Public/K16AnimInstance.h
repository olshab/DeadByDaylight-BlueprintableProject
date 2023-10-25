#pragma once

#include "CoreMinimal.h"
#include "KillerAnimInstance.h"
#include "K16AnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UK16AnimInstance : public UKillerAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isInStalkMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isGhostStealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isInChase;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isStalking;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _distanceFromCamera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _leanOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isCrouched;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isCrouchPressed;

public:
	UK16AnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK16AnimInstance) { return 0; }
