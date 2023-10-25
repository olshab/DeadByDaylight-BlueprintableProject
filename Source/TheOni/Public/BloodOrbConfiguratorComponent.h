#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "GameEventBloodOrbDropParams.h"
#include "BloodOrbConfiguratorComponent.generated.h"

class ADBDPlayer;
class ABloodOrb;
class AMobileBloodOrbRenderer;
class UBloodOrbVisibilityComponent;
class UBloodOrbAbsorberComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UBloodOrbConfiguratorComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<ABloodOrb> _bloodOrbClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FGameEventBloodOrbDropParams> _bloodOrbDropGameEvents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _fadeDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _initialFadeOutDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor _bloodOrbAuraColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor _bloodOrbAttractedAuraColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _bloodOrbVisibilityRangeInterpolationSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AMobileBloodOrbRenderer> _mobileBloodOrbRendererClass;

private:
	UFUNCTION(BlueprintCallable)
	void UpdateSurvivorBloodOrbVisibilityRange(UBloodOrbVisibilityComponent* bloodOrbVisibilityComponent, const ADBDPlayer* killer) const;

	UFUNCTION(BlueprintCallable)
	void UpdateKillerBloodOrbVisiblityRanges(UBloodOrbVisibilityComponent* bloodOrbVisibilityComponent, ADBDPlayer* killer) const;

	UFUNCTION(BlueprintCallable)
	void UpdateBloodOrbAttractSpeed(UBloodOrbAbsorberComponent* bloodOrbAbsorberComponent, ADBDPlayer* killer) const;

	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

	UFUNCTION(BlueprintCallable)
	void Authority_UpdateSurvivorBloodOrbDropperOnCrouchModifier(const ADBDPlayer* killer) const;

public:
	UBloodOrbConfiguratorComponent();
};

FORCEINLINE uint32 GetTypeHash(const UBloodOrbConfiguratorComponent) { return 0; }
