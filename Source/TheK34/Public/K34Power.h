#pragma once

#include "CoreMinimal.h"
#include "Collectable.h"
#include "Templates/SubclassOf.h"
#include "K34Power.generated.h"

class UK34TipToeModeComponent;
class UAuthoritativeActorPoolComponent;
class UK34DodsonComponent;
class UK34PowerChargePresentationItemProgressComponent;
class UK34PerspectiveChangeComponent;
class UK34FootstepsComponent;
class UK34ScoringComponent;
class UK34PowerChargePresentationPowerFadeComponent;
class UTurnLimitationStrategy;
class AActor;
class ASlasherPlayer;

UCLASS(Blueprintable)
class AK34Power : public ACollectable
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UK34TipToeModeComponent> _tipToeModeComponentClassToSpawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UK34FootstepsComponent> _footstepsComponentClassToSpawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UK34DodsonComponent> _dodsonComponentClassToSpawn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UK34PerspectiveChangeComponent> _k34PerspectiveChangeComponentClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UK34ScoringComponent> _k34ScoringComponentClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear, Export, meta=(AllowPrivateAccess=true))
	UAuthoritativeActorPoolComponent* _feetActorPool;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UK34PowerChargePresentationPowerFadeComponent* _presentationPowerFadeComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UK34PowerChargePresentationItemProgressComponent* _presentationItemProgressComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UTurnLimitationStrategy* _viewRotationStrategy;

public:
	UFUNCTION(BlueprintCallable)
	void OnKillerIntroCompleted() const;

private:
	UFUNCTION(BlueprintCallable)
	void OnFootstepAddedToPool(AActor* actor) const;

protected:
	UFUNCTION(BlueprintPure)
	ASlasherPlayer* GetOwningKiller() const;

public:
	AK34Power();
};

FORCEINLINE uint32 GetTypeHash(const AK34Power) { return 0; }
