#pragma once

#include "CoreMinimal.h"
#include "LightUpdate.h"
#include "Components/ActorComponent.h"
#include "OnLightTimelineFinished.h"
#include "LightMaterialUpdate.h"
#include "Engine/Scene.h"
#include "LightIntensityTimelineComponent.generated.h"

class UMaterialHelper;
class ULightComponent;
class UCurveFloat;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class GFXUTILITIES_API ULightIntensityTimelineComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FLightUpdate> lights;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FLightMaterialUpdate> materialHelpers;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* intensityCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool randomizeStart;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool randomizeLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float minLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float maxLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool normalizeCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool startTicking;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ELightUnits inputLightUnit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnLightTimelineFinished OnTimelineFinished;

public:
	UFUNCTION(BlueprintCallable)
	void SetRandomizeLength(bool isRandom);

	UFUNCTION(BlueprintCallable)
	void SetMinLength(float newMinValue);

	UFUNCTION(BlueprintCallable)
	void SetMaxLength(float newMaxValue);

	UFUNCTION(BlueprintCallable)
	void SetLightToMaxValue();

	UFUNCTION(BlueprintCallable)
	void SetLightCurve(UCurveFloat* lightcurve);

	UFUNCTION(BlueprintCallable)
	void Reset();

	UFUNCTION(BlueprintCallable)
	void RegisterForTick();

	UFUNCTION(BlueprintCallable)
	void DeactivateTick();

	UFUNCTION(BlueprintCallable)
	void AddMaterialHelper(UMaterialHelper* matHelper, FName propName, float multiplier);

	UFUNCTION(BlueprintCallable)
	void AddLight(ULightComponent* light, float multiplier);

public:
	ULightIntensityTimelineComponent();
};

FORCEINLINE uint32 GetTypeHash(const ULightIntensityTimelineComponent) { return 0; }
