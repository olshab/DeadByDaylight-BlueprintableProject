#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "DynamicCapsuleResizerComponent.generated.h"

class UCapsuleComponent;
class UPrimitiveComponent;
class AActor;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class PHYSICSUTILITIES_API UDynamicCapsuleResizerComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UCapsuleComponent* _capsule;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _shrinkPercent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _shrinkDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _expandDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _stayShrunkenDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _expandOverlapTestMinDeltaTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _isShrinkingEnabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_IsShrinkingAlwaysEnabled, Transient, meta=(AllowPrivateAccess=true))
	bool _isShrinkingAlwaysEnabled;

public:
	UFUNCTION(BlueprintCallable)
	void SetShrinkingEnabled(bool enabled);

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_IsShrinkingAlwaysEnabled();

	UFUNCTION()
	void OnHit(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, FVector normalImpulse, const FHitResult& hit);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UDynamicCapsuleResizerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDynamicCapsuleResizerComponent) { return 0; }
