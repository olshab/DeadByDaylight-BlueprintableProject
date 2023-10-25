#pragma once

#include "CoreMinimal.h"
#include "BaseVFX.h"
#include "Engine/EngineTypes.h"
#include "NiagaraCommon.h"
#include "UObject/NoExportTypes.h"
#include "ItemVfx.generated.h"

class UNiagaraSystem;
class UParticleSystemComponent;
class UFXSystemComponent;
class USceneComponent;
class UNiagaraComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API AItemVfx : public ABaseVFX
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UFXSystemComponent*> _particleSystems;

protected:
	UFUNCTION(BlueprintCallable)
	UNiagaraComponent* SpawnNiagaraSystemAttached(UNiagaraSystem* systemTemplate, USceneComponent* attachToComponent, FName attachPointName, TEnumAsByte<EAttachLocation::Type> locationType, bool autoDestroy, ENCPoolMethod poolingMethod, const FVector& location, const FRotator& rotation, const FVector& scale, bool autoActivate, bool preCullCheck, bool absoluteRotation, bool hideInFPV);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnAttackEnd();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnAttackBegin();

	UFUNCTION(BlueprintCallable)
	void ClearParticleSystems();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void AttachToSkeletalMesh(USkeletalMeshComponent* SkeletonPart);

protected:
	UFUNCTION(BlueprintCallable)
	void AddParticleSystemComponent(UParticleSystemComponent* particleSystemComponent);

	UFUNCTION(BlueprintCallable)
	void AddNiagaraComponent(UNiagaraComponent* niagaraComponent);

public:
	AItemVfx();
};

FORCEINLINE uint32 GetTypeHash(const AItemVfx) { return 0; }
