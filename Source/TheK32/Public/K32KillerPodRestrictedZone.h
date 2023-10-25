#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "K32KillerPodRestrictedZone.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable)
class AK32KillerPodRestrictedZone : public AActor
{
	GENERATED_BODY()

private:
	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	UStaticMeshComponent* GetStaticMesh() const;

public:
	AK32KillerPodRestrictedZone();
};

FORCEINLINE uint32 GetTypeHash(const AK32KillerPodRestrictedZone) { return 0; }
