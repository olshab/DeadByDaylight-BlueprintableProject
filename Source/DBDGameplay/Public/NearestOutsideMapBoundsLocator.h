#pragma once

#include "CoreMinimal.h"
#include "EEndGameReason.h"
#include "Components/ActorComponent.h"
#include "NearestOutsideMapBoundsLocator.generated.h"

class UAkComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UNearestOutsideMapBoundsLocator : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UAkComponent* _akComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _maxDistanceFromBorderAllowed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _heightOfOOBPosition;

private:
	UFUNCTION(BlueprintCallable)
	void OnGameEnd(EEndGameReason endGameReason);

	UFUNCTION(BlueprintCallable)
	void OnGameBegin();

	UFUNCTION(BlueprintCallable)
	void Client_InitializeAkLimitPointEvent();

public:
	UNearestOutsideMapBoundsLocator();
};

FORCEINLINE uint32 GetTypeHash(const UNearestOutsideMapBoundsLocator) { return 0; }
