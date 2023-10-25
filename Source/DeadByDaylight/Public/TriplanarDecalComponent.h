#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "TriplanarDecalComponent.generated.h"

class UTexture2D;
class UDecalComponent;
class UMaterial;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UTriplanarDecalComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Height;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaskIntensity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* TopTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* BottomTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* MaskTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EDetailMode> MinQualitySetting;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UDecalComponent* _triPlanarDecal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UClass* _triPlanarDecalClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UMaterial* _decalMaterial;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void UpdateTriplanarDecal();

public:
	UTriplanarDecalComponent();
};

FORCEINLINE uint32 GetTypeHash(const UTriplanarDecalComponent) { return 0; }
