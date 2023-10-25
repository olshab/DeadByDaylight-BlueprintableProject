#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Components/ReflectionCaptureComponent.h"
#include "UObject/NoExportTypes.h"
#include "DBDReflectionCaptureSpawnerComponent.generated.h"

class AReflectionCapture;
class UReflectionCaptureComponent;
class UTextureCube;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class GFXUTILITIES_API UDBDReflectionCaptureSpawnerComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EReflectionSourceType ReflectionSourceType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTextureCube* Cubemap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float SourceCubemapAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Brightness;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ContributionFactor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float IBLMultiplicator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCanBeTinted;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector CaptureOffset;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<AReflectionCapture*> SpawnedReflectionCaptures;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export)
	TArray<UReflectionCaptureComponent*> SpawnedReflectionCaptureComponents;

public:
	UFUNCTION(BlueprintCallable)
	void SetIBLMultiplicator(float IBLMultiplicatorNew);

	UFUNCTION(BlueprintCallable)
	void SetContributionFactor(float contributionFactorNew);

	UFUNCTION(BlueprintCallable)
	void SetBrightness(float brightnessNew);

public:
	UDBDReflectionCaptureSpawnerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDBDReflectionCaptureSpawnerComponent) { return 0; }
