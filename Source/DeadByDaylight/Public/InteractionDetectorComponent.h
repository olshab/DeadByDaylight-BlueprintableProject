#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "InteractionDetectorComponent.generated.h"

class ADBDPlayer;
class UPrimitiveComponent;
class AInteractable;
class AActor;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UInteractionDetectorComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UPrimitiveComponent* _detectionPrimitive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TSet<AInteractable*> _overlappingInteractables;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TSet<UPrimitiveComponent*> _overlappingPrimitiveComponents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSet<AActor*> _ignoredActors;

public:
	UFUNCTION(BlueprintCallable)
	void SetDetectionPrimitive(UPrimitiveComponent* detectionPrimitive);

private:
	UFUNCTION(BlueprintCallable)
	void OnLocallyObservedChanged(ADBDPlayer* player);

public:
	UFUNCTION(BlueprintPure)
	UPrimitiveComponent* GetDetectionPrimitive() const;

private:
	UFUNCTION(BlueprintCallable)
	void EndOverlapCallback(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex);

	UFUNCTION()
	void BeginOverlapCallback(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool fromSweep, const FHitResult& sweepResult);

public:
	UFUNCTION(BlueprintCallable)
	void AddIgnoredActor(AActor* ignored);

public:
	UInteractionDetectorComponent();
};

FORCEINLINE uint32 GetTypeHash(const UInteractionDetectorComponent) { return 0; }
