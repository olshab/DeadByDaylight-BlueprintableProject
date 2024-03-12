#pragma once

#include "CoreMinimal.h"
#include "K35KillerTeleportPointTargetIndicatorSettings.h"
#include "GameFramework/Actor.h"
#include "K35KillerTeleportPointTargetingIndicator.generated.h"

UCLASS(Blueprintable)
class AK35KillerTeleportPointTargetingIndicator : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FK35KillerTeleportPointTargetIndicatorSettings _settings;

protected:
	UFUNCTION(BlueprintPure)
	FK35KillerTeleportPointTargetIndicatorSettings GetSettings() const;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSettingsChanged(FK35KillerTeleportPointTargetIndicatorSettings previousSettings, FK35KillerTeleportPointTargetIndicatorSettings settings);

public:
	AK35KillerTeleportPointTargetingIndicator();
};

FORCEINLINE uint32 GetTypeHash(const AK35KillerTeleportPointTargetingIndicator) { return 0; }
