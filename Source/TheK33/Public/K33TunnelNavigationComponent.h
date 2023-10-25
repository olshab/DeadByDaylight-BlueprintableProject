#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "K33TunnelNavigationComponent.generated.h"

class UAimDirectionProvider;
class UK33TunnelPulsationComponent;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK33TunnelNavigationComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _dotProductDeltaValueForPathRecalculation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _minDistanceDeltaForPathRecalculation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UK33TunnelPulsationComponent> _tunnelPulsationComponentClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UK33TunnelPulsationComponent* _tunnelPulsationComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UAimDirectionProvider* _aimDirectionProvider;

public:
	UK33TunnelNavigationComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK33TunnelNavigationComponent) { return 0; }
