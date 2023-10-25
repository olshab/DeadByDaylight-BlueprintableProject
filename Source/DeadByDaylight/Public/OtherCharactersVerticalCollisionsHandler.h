#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "OtherCharactersVerticalCollisionsHandler.generated.h"

class AActor;
class UCapsuleComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UOtherCharactersVerticalCollisionsHandler : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<AActor*> _ignoreBelowActors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<AActor*> _overlappingActors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UCapsuleComponent* _pawnDetector;

public:
	UFUNCTION(BlueprintCallable)
	void SetPawnDetector(UCapsuleComponent* pawnDetector);

private:
	UFUNCTION(BlueprintCallable)
	void OnPawnDetectorOverlapExit(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex);

	UFUNCTION()
	void OnPawnDetectorOverlapEnter(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

	UFUNCTION(BlueprintCallable)
	void InitializeOverlapDetection();

public:
	UOtherCharactersVerticalCollisionsHandler();
};

FORCEINLINE uint32 GetTypeHash(const UOtherCharactersVerticalCollisionsHandler) { return 0; }
