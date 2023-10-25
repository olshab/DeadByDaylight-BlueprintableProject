#pragma once

#include "CoreMinimal.h"
#include "BatchMeshCommands.h"
#include "DBDOutlineRenderStrategySelector.h"
#include "GameplayTagContainer.h"
#include "UObject/NoExportTypes.h"
#include "DBDOutlineComponent.generated.h"

class UMaterialInterface;
class UBaseOutlineRenderStrategy;
class UTexture;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDBDOutlineComponent : public UBatchMeshCommands
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp)
	float InterpolationSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp)
	bool ShouldBeAboveOutlines;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp)
	bool ForceOutlineFarAway;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp)
	bool LimitToCustomDepthObjects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp)
	bool FadeOutAsClosingIn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp)
	bool IsAlwaysVisible;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp)
	float MinimumOutlineDistanceWhenIsAlwaysVisible;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Interp)
	float MinimumOutlineDistance;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString OutlineName;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FDBDOutlineRenderStrategySelector _renderStrategySelector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UBatchMeshCommands* _batchMeshCommands;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UBaseOutlineRenderStrategy* _renderingStrategy;

public:
	UFUNCTION(BlueprintCallable, BlueprintCosmetic)
	void SetTargetColor(FLinearColor color);

	UFUNCTION(BlueprintCallable)
	void SetOutlineMaterialOverride(FGameplayTag OverrideName);

	UFUNCTION(BlueprintCallable)
	void SetOutlineIntensity(float outlineIntensity);

	UFUNCTION(BlueprintCallable)
	void SetMinimumOutlineDistance(float distanceWhenIsAlwaysVisible, float distance);

	UFUNCTION(BlueprintCallable)
	void SetMaterialCopyTarget(UMaterialInterface* inMaterialToCopy);

	UFUNCTION(BlueprintCallable)
	void SetIsOccludingOutlines(const bool isOccluding);

	UFUNCTION(BlueprintCallable, BlueprintCosmetic)
	void SetFadeTexture(UTexture* inFadeTexture);

	UFUNCTION(BlueprintCallable, BlueprintCosmetic)
	void SetFadeIntensity(float fadeIntensity);

	UFUNCTION(BlueprintCallable)
	void ResetToTransparent();

	UFUNCTION(BlueprintCallable, BlueprintCosmetic)
	void RefreshOutlineComponent();

private:
	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

	UFUNCTION(BlueprintCallable)
	void InitBatcher();

public:
	UFUNCTION(BlueprintPure, BlueprintCosmetic)
	FLinearColor GetTargetColor() const;

public:
	UDBDOutlineComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDBDOutlineComponent) { return 0; }
