#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GMAdaptiveShadowMapSource.generated.h"

class UGMAdaptiveShadowMapAtlas;
class ULightComponent;

UCLASS(Blueprintable, Abstract)
class GRAPHICSEXTENSIONS_API UGMAdaptiveShadowMapSource : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UGMAdaptiveShadowMapAtlas* _atlas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	ULightComponent* _lightComponent;

public:
	UGMAdaptiveShadowMapSource();
};

FORCEINLINE uint32 GetTypeHash(const UGMAdaptiveShadowMapSource) { return 0; }
