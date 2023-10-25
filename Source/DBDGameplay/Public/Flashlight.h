#pragma once

#include "CoreMinimal.h"
#include "BaseCamperCollectable.h"
#include "GameplayTagContainer.h"
#include "Flashlight.generated.h"

class USpotLightComponent;

UCLASS(Blueprintable)
class DBDGAMEPLAY_API AFlashlight : public ABaseCamperCollectable
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FGameplayTagContainer _allowedInteractionSemanticsDuringUse;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _shouldUseCooldowns;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	float _cooldownWhileOnDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	float _cooldownWhileOffDuration;

public:
	UFUNCTION(BlueprintPure)
	USpotLightComponent* GetSpotlightComponent() const;

public:
	AFlashlight();
};

FORCEINLINE uint32 GetTypeHash(const AFlashlight) { return 0; }
