#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GMAdaptiveShadowMapController.generated.h"

class UGMAdaptiveShadowMapSource;
class UMaterialInterface;
class UGMAdaptiveShadowMapAtlas;

UCLASS(Blueprintable)
class GRAPHICSEXTENSIONS_API UGMAdaptiveShadowMapController : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UGMAdaptiveShadowMapAtlas* _atlas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UMaterialInterface* _lightFunctionMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<UGMAdaptiveShadowMapSource*> _shadowMapSourceList;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<UGMAdaptiveShadowMapSource*> _shadowMapSourceActivatedList;

public:
	UGMAdaptiveShadowMapController();
};

FORCEINLINE uint32 GetTypeHash(const UGMAdaptiveShadowMapController) { return 0; }
