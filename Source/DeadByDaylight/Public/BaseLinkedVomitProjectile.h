#pragma once

#include "CoreMinimal.h"
#include "KillerProjectile.h"
#include "UObject/NoExportTypes.h"
#include "ImpactInfo.h"
#include "BaseLinkedVomitProjectile.generated.h"

class ACamperPlayer;
class UParticleSystem;
class UAkComponent;
class USplineMeshComponent;
class UPoolableProjectileComponent;
class UParticleSystemComponent;
class UAkAudioEvent;
class USphereComponent;
class AInteractable;
class USceneComponent;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API ABaseLinkedVomitProjectile : public AKillerProjectile
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLinkedVomitProjectileDeactivate);

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _useSplashDamage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _passThroughSurvivors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UPoolableProjectileComponent* _poolableProjectile;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnLinkedVomitProjectileDeactivate OnDeactivateOrLaunch;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UParticleSystemComponent* _vomitTrail;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	USplineMeshComponent* _splineMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	USphereComponent* _splashDamageSphere;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UAkComponent* _akAudioVomitProjectile;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UParticleSystem* _vomitSplashCamper;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UParticleSystem* _vomitSplash;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UAkAudioEvent* _akAudioEventAudioEventVomitSplash;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FVector2D _minDecalSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FVector2D _maxDecalSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _isSuperVomit;

protected:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnAffectSurvivor(ACamperPlayer* camperPlayer);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnAffectInteractable(AInteractable* interactable, USceneComponent* hitComponent);

	UFUNCTION(BlueprintCallable)
	void NativeExplode(const FImpactInfo& impactInfo);

public:
	ABaseLinkedVomitProjectile();
};

FORCEINLINE uint32 GetTypeHash(const ABaseLinkedVomitProjectile) { return 0; }
