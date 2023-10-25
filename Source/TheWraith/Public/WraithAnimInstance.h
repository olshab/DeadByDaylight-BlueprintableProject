#pragma once

#include "CoreMinimal.h"
#include "KillerAnimInstance.h"
#include "PerspectiveDependentAnimSequenceSelector.h"
#include "WraithAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UWraithAnimInstance : public UKillerAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isRingingBell;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isCloaking;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isUncloaking;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FPerspectiveDependentAnimSequenceSelector _cloakingInSelector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FPerspectiveDependentAnimSequenceSelector _cloakingSelector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FPerspectiveDependentAnimSequenceSelector _cloakingOutSelector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FPerspectiveDependentAnimSequenceSelector _uncloakingInSelector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FPerspectiveDependentAnimSequenceSelector _uncloakingSelector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FPerspectiveDependentAnimSequenceSelector _uncloakingOutSelector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _cloakingPlayRate;

public:
	UWraithAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UWraithAnimInstance) { return 0; }
