#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "EscapeBlocker.generated.h"

class UBoxComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API AEscapeBlocker : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UBoxComponent* _camperBlocker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UBoxComponent* _playerDetectionZone;

protected:
	UFUNCTION(BlueprintCallable)
	void SetPlayerDetectionZone(UBoxComponent* playerDetectionZone);

	UFUNCTION(BlueprintCallable)
	void SetCamperBlocker(UBoxComponent* camperBlocker);

private:
	UFUNCTION(BlueprintCallable)
	void OnPlayerDetectionZoneEndOverlap(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex);

	UFUNCTION()
	void OnPlayerDetectionZoneBeginOverlap(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void DeactivatePlayerBlockerFX();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void ActivatePlayerBlockerFX();

public:
	AEscapeBlocker();
};

FORCEINLINE uint32 GetTypeHash(const AEscapeBlocker) { return 0; }
