#pragma once

#include "CoreMinimal.h"
#include "OnMapActorDetected.h"
#include "Components/ActorComponent.h"
#include "EMapActorCategory.h"
#include "Engine/EngineTypes.h"
#include "MapActorDetectorComponent.generated.h"

class UPrimitiveComponent;
class AActor;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UMapActorDetectorComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnMapActorDetected OnActorDetected;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<EMapActorCategory> CollectedCategories;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UPrimitiveComponent* _primitive;

public:
	UFUNCTION(BlueprintCallable)
	void SetDetectionPrimitive(UPrimitiveComponent* primitive);

protected:
	UFUNCTION()
	void OnOverlapEnter(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

public:
	UMapActorDetectorComponent();
};

FORCEINLINE uint32 GetTypeHash(const UMapActorDetectorComponent) { return 0; }
