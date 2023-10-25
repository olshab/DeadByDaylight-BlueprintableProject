#pragma once

#include "CoreMinimal.h"
#include "AICharacterBehaviourData.h"
#include "ECharacterMovementTypes.h"
#include "AICharacterRepairGeneratorBehaviourData.generated.h"

class AGenerator;

UCLASS(Blueprintable)
class UAICharacterRepairGeneratorBehaviourData : public UAICharacterBehaviourData
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AGenerator* _generator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ECharacterMovementTypes _characterMovementType;

public:
	UFUNCTION(BlueprintCallable)
	void Init(AGenerator* generator, ECharacterMovementTypes characterMovementType);

public:
	UAICharacterRepairGeneratorBehaviourData();
};

FORCEINLINE uint32 GetTypeHash(const UAICharacterRepairGeneratorBehaviourData) { return 0; }
