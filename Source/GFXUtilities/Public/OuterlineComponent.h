#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "OuterlineComponent.generated.h"

class USkeletalMeshComponent;
class UMaterialInterface;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class GFXUTILITIES_API UOuterlineComponent : public USceneComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UMaterialInterface* CloneCustomDepthMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UMaterialInterface* CloneTranslucentMaterial;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UMaterialInstanceDynamic* _cloneCustomDepthMaterialDynamic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UMaterialInstanceDynamic* _cloneTranslucentMaterialDynamic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	USkeletalMeshComponent* _customDepthSkeletalMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	USkeletalMeshComponent* _overlaySkeletalMesh;

public:
	UFUNCTION(BlueprintCallable)
	void SetIntensity(float intensity);

public:
	UOuterlineComponent();
};

FORCEINLINE uint32 GetTypeHash(const UOuterlineComponent) { return 0; }
