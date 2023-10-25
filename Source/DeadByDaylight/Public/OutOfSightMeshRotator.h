#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OutOfSightMeshRotator.generated.h"

class ADBDPlayer;
class UMeshComponent;

UCLASS(Blueprintable, Transient, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UOutOfSightMeshRotator : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _maxDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _dotProductThreshold;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADBDPlayer* _locallyObservedPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UMeshComponent*> _meshesToRotate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _rotationOffset;

protected:
	UFUNCTION(BlueprintCallable)
	void SetMeshesToRotate(TArray<UMeshComponent*> meshesToRotate);

public:
	UOutOfSightMeshRotator();
};

FORCEINLINE uint32 GetTypeHash(const UOutOfSightMeshRotator) { return 0; }
