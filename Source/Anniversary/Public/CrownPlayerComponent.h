#pragma once

#include "CoreMinimal.h"
#include "AnniversaryPlayerComponentInterface.h"
#include "Components/SceneComponent.h"
#include "GameplayTagContainer.h"
#include "TagStateBool.h"
#include "CrownPlayerComponent.generated.h"

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class ANNIVERSARY_API UCrownPlayerComponent : public USceneComponent, public IAnniversaryPlayerComponentInterface
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FGameplayTagContainer _crownVFXParticleDeactivateTags;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FGameplayTagContainer _unhookGameEvents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FTagStateBool _isCrownEventActive;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void Cosmetic_SetVFXParticlesVisibility(bool isVisible);

public:
	UCrownPlayerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCrownPlayerComponent) { return 0; }
