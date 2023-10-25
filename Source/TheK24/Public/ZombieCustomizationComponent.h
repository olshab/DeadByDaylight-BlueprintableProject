#pragma once

#include "CoreMinimal.h"
#include "CustomizedSkeletalMesh.h"
#include "ZombieCustomizationComponent.generated.h"

class ACamperPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UZombieCustomizationComponent : public UCustomizedSkeletalMesh
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, Transient)
	TWeakObjectPtr<ACamperPlayer> _survivorSource;

public:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_SetZombieCustomization(ACamperPlayer* survivor);

public:
	UZombieCustomizationComponent();
};

FORCEINLINE uint32 GetTypeHash(const UZombieCustomizationComponent) { return 0; }
