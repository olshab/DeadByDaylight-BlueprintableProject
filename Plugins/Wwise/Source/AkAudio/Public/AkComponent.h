#pragma once

#include "CoreMinimal.h"
#include "AkGameObject.h"
#include "Engine/LatentActionManager.h"
#include "Engine/EngineTypes.h"
#include "EAkCurveInterpolation.h"
#include "AkExternalSourceInfo.h"
#include "AkComponent.generated.h"

class UAkComponent;
class UAkAuxBus;
class UAkTrigger;
class UAkSwitchValue;
class UAkAudioEvent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class AKAUDIO_API UAkComponent : public UAkGameObject
{
	GENERATED_BODY()

public:
	UPROPERTY()
	bool bUseSpatialAudio_DEPRECATED;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ECollisionChannel> OcclusionCollisionChannel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool EnableSpotReflectors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float outerRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float innerRadius;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	UAkAuxBus* EarlyReflectionAuxBus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FString EarlyReflectionAuxBusName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 EarlyReflectionOrder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float EarlyReflectionBusSendGain;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float EarlyReflectionMaxPathLength;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float roomReverbAuxBusGain;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 diffractionMaxEdges;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 diffractionMaxPaths;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float diffractionMaxPathLength;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool DrawFirstOrderReflections;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool DrawSecondOrderReflections;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool DrawHigherOrderReflections;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool DrawDiffraction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool StopWhenOwnerDestroyed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AttenuationScalingFactor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float OcclusionRefreshInterval;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseReverbVolumes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float OcclusionAffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AutoPostOnBeginPlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool StaticAmbientEmitter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StaticAmbientEmitterFadeDuration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAkCurveInterpolation StaticAmbientEmitterInterpolationCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export)
	TSet<UAkComponent*> ListenersInRange;

public:
	UFUNCTION(BlueprintCallable, BlueprintCosmetic)
	void UseReverbVolumes(bool inUseReverbVolumes);

	UFUNCTION(BlueprintCallable)
	void UseEarlyReflections(UAkAuxBus* AuxBus, int32 Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const FString& AuxBusName);

	UFUNCTION(BlueprintCallable, BlueprintCosmetic)
	void SetSwitch(UAkSwitchValue* SwitchValue, const FString& SwitchGroup, const FString& SwitchState);

	UFUNCTION(BlueprintCallable, BlueprintCosmetic)
	void SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed);

	UFUNCTION(BlueprintCallable, BlueprintCosmetic)
	void SetOutputBusVolume(float BusVolume);

	UFUNCTION(BlueprintCallable, BlueprintCosmetic)
	void SetListeners(const TArray<UAkComponent*>& Listeners);

	UFUNCTION(BlueprintCallable)
	void SetGameObjectRadius(float in_outerRadius, float in_innerRadius);

	UFUNCTION(BlueprintCallable, BlueprintCosmetic)
	void SetEarlyReflectionsVolume(float SendVolume);

	UFUNCTION(BlueprintCallable, BlueprintCosmetic)
	void SetEarlyReflectionsAuxBus(const FString& AuxBusName);

	UFUNCTION(BlueprintCallable, BlueprintCosmetic)
	void SetAttenuationScalingFactor(float Value);

	UFUNCTION(BlueprintCallable, BlueprintCosmetic)
	void PostTrigger(UAkTrigger* TriggerValue, const FString& Trigger);

	UFUNCTION(BlueprintCallable)
	void PostAssociatedAkEventAndWaitForEndAsync(int32& PlayingID, const TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo);

	UFUNCTION(BlueprintCallable)
	int32 PostAssociatedAkEventAndWaitForEnd(const TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo);

	UFUNCTION(BlueprintCallable, BlueprintCosmetic)
	int32 PostAkEventByName(const FString& in_EventName);

	UFUNCTION(BlueprintCallable)
	void PostAkEventAndWaitForEndAsync(UAkAudioEvent* AkEvent, int32& PlayingID, const TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo);

	UFUNCTION(BlueprintCallable)
	int32 PostAkEventAndWaitForEnd(UAkAudioEvent* AkEvent, const FString& in_EventName, const TArray<FAkExternalSourceInfo>& ExternalSources, FLatentActionInfo LatentInfo);

	UFUNCTION(BlueprintPure, BlueprintCosmetic)
	float GetAttenuationRadius() const;

public:
	UAkComponent();
};

FORCEINLINE uint32 GetTypeHash(const UAkComponent) { return 0; }
