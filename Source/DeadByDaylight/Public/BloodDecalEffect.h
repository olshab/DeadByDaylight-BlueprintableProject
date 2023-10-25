#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BloodDecalEffect.generated.h"

class UCurveFloat;
class UBloodDecalEffectIntensity;
class UTexture2D;
class UMaterialInterface;

UCLASS(Blueprintable)
class UBloodDecalEffect : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* AnimationTimelineCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UCurveFloat* DestroyTimelineCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UTexture2D*> Textures;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UTexture2D*> Normals;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool EnableVisualEffects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UBloodDecalEffectIntensity* BloodDecalEffectIntensity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ColorInterpolationSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UMaterialInterface* DefalultDecalMaterial;

public:
	UBloodDecalEffect();
};

FORCEINLINE uint32 GetTypeHash(const UBloodDecalEffect) { return 0; }
