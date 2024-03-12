#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EDBDCameraSocketID.h"
#include "ClippedActor.h"
#include "ActorClipperComponent.generated.h"

class AActor;
class UPrimitiveCollection;
class USphereComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UActorClipperComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	USphereComponent* Shape;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<AActor*, FClippedActor> _clippedActors;

	UPROPERTY(EditAnywhere, Transient)
	TWeakObjectPtr<UPrimitiveCollection> _clippables;

public:
	UFUNCTION(BlueprintCallable)
	void SetPrimitiveCollection(const UPrimitiveCollection* clippables);

private:
	UFUNCTION(BlueprintCallable)
	void OnOwnerLocallyObservedChanged(bool locallyObserved);

	UFUNCTION(BlueprintCallable)
	void OnCameraChanged(EDBDCameraSocketID socketId);

public:
	UActorClipperComponent();
};

FORCEINLINE uint32 GetTypeHash(const UActorClipperComponent) { return 0; }
