#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DecalMaskedMaterialsList.generated.h"

class UStaticMesh;
class UMaterialInterface;

UCLASS(Blueprintable)
class UDecalMaskedMaterialsList : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMesh* decalPlaneStaticMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float decalPlaneExtent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, UMaterialInterface*> decalMaskedMaterials;

public:
	UDecalMaskedMaterialsList();
};

FORCEINLINE uint32 GetTypeHash(const UDecalMaskedMaterialsList) { return 0; }
