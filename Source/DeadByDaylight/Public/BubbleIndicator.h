#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BubbleIndicator.generated.h"

class UStaticMesh;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API ABubbleIndicator : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _lifeTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _displayToLocallyObserved;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isInRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isPreSpawned;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetSilhouette(UStaticMesh* staticMesh);

protected:
	UFUNCTION(BlueprintCallable)
	void DeactivateBubble();

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ActivateBubbleFX(const float duration);

public:
	ABubbleIndicator();
};

FORCEINLINE uint32 GetTypeHash(const ABubbleIndicator) { return 0; }
