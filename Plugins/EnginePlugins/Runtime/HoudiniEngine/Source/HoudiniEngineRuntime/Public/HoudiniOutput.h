#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HoudiniInstancedOutput.h"
#include "HoudiniOutputObject.h"
#include "EHoudiniOutputType.h"
#include "HoudiniOutputObjectIdentifier.h"
#include "HoudiniGeoPartObject.h"
#include "HoudiniOutput.generated.h"

class AActor;
class UMaterialInterface;

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniOutput : public UObject
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EHoudiniOutputType Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FHoudiniGeoPartObject> HoudiniGeoPartObjects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DuplicateTransient)
	TMap<FHoudiniOutputObjectIdentifier, FHoudiniOutputObject> OutputObjects;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FHoudiniOutputObjectIdentifier, FHoudiniInstancedOutput> InstancedOutputs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, UMaterialInterface*> AssignementMaterials;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FString, UMaterialInterface*> ReplacementMaterials;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bLandscapeWorldComposition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<AActor*> HoudiniCreatedSocketActors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<AActor*> HoudiniAttachedSocketActors;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool bIsEditableNode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, DuplicateTransient, meta=(AllowPrivateAccess=true))
	bool bHasEditableNodeBuilt;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool bIsUpdating;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool bCanDeleteHoudiniNodes;

public:
	UHoudiniOutput();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniOutput) { return 0; }
