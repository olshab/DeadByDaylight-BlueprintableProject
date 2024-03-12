#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "FlashlightConeComponent.generated.h"

class USceneComponent;
class AActor;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UFlashlightConeComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector AIAimBeamLocationOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator AIAimBeamRotationOffset;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	USceneComponent* _flashlightBottom;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _baseBeamAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _baseBeamLength;

	UPROPERTY(EditAnywhere, Transient)
	TWeakObjectPtr<AActor> _cacheCollidingActor;

	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _tagsPreventingBeamOcclusion;

public:
	UFUNCTION(BlueprintPure)
	float GetOcclusionDistance() const;

	UFUNCTION(BlueprintPure)
	float GetEffectiveConeLength() const;

	UFUNCTION(BlueprintPure)
	float GetEffectiveConeHalfAngle() const;

public:
	UFlashlightConeComponent();
};

FORCEINLINE uint32 GetTypeHash(const UFlashlightConeComponent) { return 0; }
