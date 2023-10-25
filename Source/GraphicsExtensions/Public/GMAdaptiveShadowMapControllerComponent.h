#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "PerPlatformProperties.h"
#include "UObject/NoExportTypes.h"
#include "GMAdaptiveShadowMapControllerComponent.generated.h"

class UGMAdaptiveShadowMapSourceComponent;
class UGMAdaptiveShadowMapController;
class UGMAdaptiveShadowMapAtlas;
class UMaterialInterface;
class UGMAdaptiveShadowMapSource;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class GRAPHICSEXTENSIONS_API UGMAdaptiveShadowMapControllerComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FPerPlatformInt TileSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TileCountX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 TileCountY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FIntPoint GridSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 GeneratedTilesPerFrame;

	UPROPERTY(EditAnywhere)
	FPerPlatformInt MaxPreallocatedTilesPerFrame;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bSupportsDirectionalLights;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bSupportsSpotLights;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UMaterialInterface* LightFunctionMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CullShadowIfPixelSizeLessThan;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bPreviewOnly;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UGMAdaptiveShadowMapAtlas* _atlas;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UGMAdaptiveShadowMapController* _controller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<UGMAdaptiveShadowMapSourceComponent*, UGMAdaptiveShadowMapSource*> _shadowMapSources;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UMaterialInstanceDynamic* _lightFunctionMaterialInstance;

public:
	UFUNCTION(BlueprintCallable, BlueprintCosmetic)
	void RebuildAtlas();

	UFUNCTION(BlueprintCallable, BlueprintCosmetic)
	void RebuildAllAtlases();

	UFUNCTION(BlueprintCallable, BlueprintCosmetic)
	bool IsControllerDonePreallocatingTiles();

	UFUNCTION(BlueprintCallable, BlueprintCosmetic)
	int32 GetTileSize();

	UFUNCTION(BlueprintCallable, BlueprintCosmetic)
	int32 GetTileCountY();

	UFUNCTION(BlueprintCallable, BlueprintCosmetic)
	int32 GetTileCountX();

	UFUNCTION(BlueprintCallable, BlueprintCosmetic)
	void DumpDebugInfo();

public:
	UGMAdaptiveShadowMapControllerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UGMAdaptiveShadowMapControllerComponent) { return 0; }
