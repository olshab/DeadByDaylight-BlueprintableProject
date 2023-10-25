#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "TerrorRadiusEmitterComponent.generated.h"

class UTerrorRadiusReceiverComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UTerrorRadiusEmitterComponent : public USceneComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _simulatedFixedDistance;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _imitatesAudioOnly;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _active;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _isFakeTerrorRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _radius;

	UPROPERTY(EditAnywhere, Transient)
	TMap<TWeakObjectPtr<UTerrorRadiusReceiverComponent>, bool> _receiversInTerrorRadiusMap;

	UPROPERTY(EditAnywhere, Transient)
	TMap<TWeakObjectPtr<UTerrorRadiusReceiverComponent>, bool> _receiversPhysicallyInRadiusRangeMap;

public:
	UFUNCTION(BlueprintCallable)
	void SetTerrorRadius(float radius);

	UFUNCTION(BlueprintCallable)
	void SetSimulatedFixedDistance(float distance);

	UFUNCTION(BlueprintCallable)
	void SetIsFakeTerrorRadius(bool value);

	UFUNCTION(BlueprintCallable)
	void SetImitatesAudioOnly(bool imitatesAudioOnly);

	UFUNCTION(BlueprintCallable)
	void SetEmitterActive(bool active);

	UFUNCTION(BlueprintPure)
	bool IsInTerrorRadius(UTerrorRadiusReceiverComponent* receiver) const;

	UFUNCTION(BlueprintPure)
	float GetSimulatedFixedDistance() const;

	UFUNCTION(BlueprintPure)
	float GetRadius() const;

	UFUNCTION(BlueprintPure)
	bool GetIsActive() const;

	UFUNCTION(BlueprintPure)
	bool GetImitatesAudioOnly() const;

public:
	UTerrorRadiusEmitterComponent();
};

FORCEINLINE uint32 GetTypeHash(const UTerrorRadiusEmitterComponent) { return 0; }
