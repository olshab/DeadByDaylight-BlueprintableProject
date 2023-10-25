#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimInstance.h"
#include "Engine/EngineTypes.h"
#include "K33PushbackAnimInstance.generated.h"

class ACharacter;

UCLASS(Blueprintable, NonTransient)
class UK33PushbackAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsActive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsFPV;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ETraceTypeQuery> _traceTypeQuery;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _traceComplex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _ignoreTouches;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _forwardCheckDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _backwardCheckDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector _lineTraceStartOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ForwardHitDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BackwardHitDistance;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ACharacter* _character;

public:
	UK33PushbackAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK33PushbackAnimInstance) { return 0; }
