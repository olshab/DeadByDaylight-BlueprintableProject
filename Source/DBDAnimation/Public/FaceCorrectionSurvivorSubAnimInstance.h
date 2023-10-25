#pragma once

#include "CoreMinimal.h"
#include "BaseSurvivorAnimInstance.h"
#include "FaceCorrectionSurvivorSubAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class DBDANIMATION_API UFaceCorrectionSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isIdle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isFreddyMori;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isInCloset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isEdgeCase;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isInjured;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isHealingOthers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _isCrouched;

public:
	UFaceCorrectionSurvivorSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UFaceCorrectionSurvivorSubAnimInstance) { return 0; }
