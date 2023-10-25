#pragma once

#include "CoreMinimal.h"
#include "Components/DecalComponent.h"
#include "DBDDecalComponent.generated.h"

class UDecalCollection;
class UStaticMeshComponent;
class UMaterialInstanceDynamic;
class UGlassStaticMesh;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDBDDecalComponent : public UDecalComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export)
	TArray<UStaticMeshComponent*> staticMeshDecals;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export)
	TMap<UStaticMeshComponent*, UGlassStaticMesh*> staticMeshGlass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<UMaterialInstanceDynamic*> materialInstances;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UDecalCollection* _decalCollection;

public:
	UDBDDecalComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDBDDecalComponent) { return 0; }
