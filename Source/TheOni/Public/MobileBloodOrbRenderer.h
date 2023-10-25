#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BloodOrbInfo.h"
#include "MobileBloodOrbRenderer.generated.h"

class UBloodOrbVisibilityComponent;
class UMaterialInstance;
class UInstancedStaticMeshComponent;
class ABloodOrb;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable)
class THEONI_API AMobileBloodOrbRenderer : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UMaterialInstance* OrbMaterialInstance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UMaterialInstance* OutlineMaterialInstance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CullInterval;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UInstancedStaticMeshComponent* _ismComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UInstancedStaticMeshComponent* _outlineIsmComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<ABloodOrb*, FBloodOrbInfo> _instanceMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UMaterialInstanceDynamic* _outlineMaterialInstanceDynamic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UMaterialInstanceDynamic* _orbMaterialInstanceDynamic;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UBloodOrbVisibilityComponent* _bloodOrbVisibilityComponent;

public:
	AMobileBloodOrbRenderer();
};

FORCEINLINE uint32 GetTypeHash(const AMobileBloodOrbRenderer) { return 0; }
