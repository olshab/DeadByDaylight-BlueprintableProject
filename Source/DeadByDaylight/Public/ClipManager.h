#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "StaticMeshesArrayForClip.h"
#include "MaterialOriginalState.h"
#include "UObject/NoExportTypes.h"
#include "ClipManager.generated.h"

class UDBDClipRegionComponent;
class UMaterialInterface;
class UDataTable;
class UMeshComponent;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API AClipManager : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UDBDClipRegionComponent*> _clippingZones;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TSet<UMeshComponent*> _meshComponents;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<FMaterialOriginalState> _dissolvedMeshes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<UMaterialInterface*, UMaterialInterface*> _normal2dissolve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<UMaterialInterface*, FStaticMeshesArrayForClip> _normal2dissolveStaticMeshes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<UMaterialInterface*, UMaterialInterface*> _dissolve2normal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UDataTable* _sphericalDissolveMaterials;

public:
	UFUNCTION(BlueprintCallable)
	void SphericalDissolveAt(FVector Location, float radius);

	UFUNCTION(BlueprintCallable)
	void RemoveDissolveMaterials();

public:
	AClipManager();
};

FORCEINLINE uint32 GetTypeHash(const AClipManager) { return 0; }
