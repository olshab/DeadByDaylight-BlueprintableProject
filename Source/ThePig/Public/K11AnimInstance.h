#pragma once

#include "CoreMinimal.h"
#include "KillerAnimInstance.h"
#include "Templates/SubclassOf.h"
#include "K11AnimInstance.generated.h"

class UInteractionDefinition;
class UAnimSequence;

UCLASS(Blueprintable, NonTransient)
class UK11AnimInstance : public UKillerAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isAmbushAttack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isCrouched;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isCrouchPressed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _crouchPlayRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float _uncrouchPlayRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UInteractionDefinition> _crouchInteractionDefinitionClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UInteractionDefinition> _uncrouchInteractionDefinitionClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimSequence* _crouchToStand;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimSequence* _standToCrouch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimSequence* _crouchToStandFPV;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimSequence* _standToCrouchFPV;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UInteractionDefinition* _crouchInteractionDefinition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UInteractionDefinition* _uncrouchInteractionDefinition;

public:
	UK11AnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK11AnimInstance) { return 0; }
