#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GMShadowDepthCapture.generated.h"

class ULightComponent;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class GRAPHICSEXTENSIONS_API UGMShadowDepthCapture : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	ULightComponent* _lightComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UTextureRenderTarget2D* _depthTarget;

public:
	UGMShadowDepthCapture();
};

FORCEINLINE uint32 GetTypeHash(const UGMShadowDepthCapture) { return 0; }
