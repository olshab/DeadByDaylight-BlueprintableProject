#pragma once

#include "CoreMinimal.h"
#include "ArmIKSensorDatum.h"
#include "Components/ActorComponent.h"
#include "EArm.h"
#include "ArmIKSensorComponent.generated.h"

class UCameraComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UArmIKSensorComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidget))
	USkeletalMeshComponent* _mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, EditFixedSize)
	TMap<EArm, FArmIKSensorDatum> _arms;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _capsuleRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _capsuleHalfHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _traceLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UCameraComponent* _owningCamera;

public:
	UArmIKSensorComponent();
};

FORCEINLINE uint32 GetTypeHash(const UArmIKSensorComponent) { return 0; }
