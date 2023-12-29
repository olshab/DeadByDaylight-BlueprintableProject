#pragma once

#include "CoreMinimal.h"
#include "Fadeable.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "PerPlatformProperties.h"
#include "BaseSky.generated.h"

class UExponentialHeightFogComponent;
class UDirectionalLightComponent;
class USceneComponent;
class UStaticMeshComponent;
class USkyLightComponent;
class UPostProcessComponent;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API ABaseSky : public AActor, public IFadeable
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AdjustCullDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float IBLContributionMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor ProbesTintColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ProbesSaturationValue;

	UPROPERTY(EditAnywhere)
	FPerPlatformFloat ASMDepthBias;

	UPROPERTY(EditAnywhere)
	FPerPlatformFloat ASMDepthAttenuation;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ToggleLightingChange(bool toggleOn, FName themeName);

	UFUNCTION(BlueprintCallable)
	void SetProbesTint(FLinearColor inColor, float inSaturation);

protected:
	UFUNCTION(BlueprintCallable)
	void SetCullDistance(float newCullDistance);

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnFadeEnd(AActor* other);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnFadeBegin(AActor* other);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnAlphaChanged(float newAlpha, AActor* other);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	USceneComponent* GetVistasAndEnvironmentElements();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	UPostProcessComponent* GetPostprocessComponent();

	UFUNCTION(BlueprintCallable)
	void CopyComponentsSettingsFromSource(UStaticMeshComponent* moonMesh, UDirectionalLightComponent* shadowLight, UDirectionalLightComponent* godRayLight, USkyLightComponent* skylight, UExponentialHeightFogComponent* heightFog, UPostProcessComponent* postProcess, UClass* sourceBaseSkyClass);

public:
	ABaseSky();
};

FORCEINLINE uint32 GetTypeHash(const ABaseSky) { return 0; }
