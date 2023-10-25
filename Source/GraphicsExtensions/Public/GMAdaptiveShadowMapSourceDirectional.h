#pragma once

#include "CoreMinimal.h"
#include "GMAdaptiveShadowMapSource.h"
#include "GMAdaptiveShadowMapSourceDirectional.generated.h"

class UDirectionalLightComponent;

UCLASS(Blueprintable)
class GRAPHICSEXTENSIONS_API UGMAdaptiveShadowMapSourceDirectional : public UGMAdaptiveShadowMapSource
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UDirectionalLightComponent* _directionalLightComponent;

public:
	UGMAdaptiveShadowMapSourceDirectional();
};

FORCEINLINE uint32 GetTypeHash(const UGMAdaptiveShadowMapSourceDirectional) { return 0; }
