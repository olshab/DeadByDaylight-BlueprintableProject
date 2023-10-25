#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EBloodOrbVisibilityMode.h"
#include "Engine/EngineTypes.h"
#include "BloodOrbOverlapComponent.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UBloodOrbOverlapComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_CurrentOverlappingOrbs, meta=(AllowPrivateAccess=true))
	int32 _currentOverlappingOrbs;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_CurrentOverlappingOrbs(int32 previousOverlappingOrbs);

	UFUNCTION(BlueprintCallable)
	void Authority_OnDestroyedBloodOrb(AActor* destroyedActor);

	UFUNCTION(BlueprintCallable)
	void Authority_OnBloodOrbVisibilityModeChanged(EBloodOrbVisibilityMode visibilityMode);

	UFUNCTION(BlueprintCallable)
	void Authority_OnBloodOrbEndOverlap(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex);

	UFUNCTION()
	void Authority_OnBloodOrbBeginOverlap(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UBloodOrbOverlapComponent();
};

FORCEINLINE uint32 GetTypeHash(const UBloodOrbOverlapComponent) { return 0; }
