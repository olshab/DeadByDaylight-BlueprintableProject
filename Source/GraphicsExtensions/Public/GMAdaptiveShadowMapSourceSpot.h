#pragma once

#include "CoreMinimal.h"
#include "GMAdaptiveShadowMapSource.h"
#include "GMAdaptiveShadowMapSourceSpot.generated.h"

class USpotLightComponent;

UCLASS(Blueprintable)
class GRAPHICSEXTENSIONS_API UGMAdaptiveShadowMapSourceSpot : public UGMAdaptiveShadowMapSource
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	USpotLightComponent* _spotLightComponent;

public:
	UGMAdaptiveShadowMapSourceSpot();
};

FORCEINLINE uint32 GetTypeHash(const UGMAdaptiveShadowMapSourceSpot) { return 0; }
