#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/SoftObjectPtr.h"
#include "EHoudiniInputObjectType.h"
#include "HoudiniInputObject.generated.h"

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniInputObject : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UObject> InputObject;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FTransform Transform;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EHoudiniInputObjectType Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NonTransactional, Transient, DuplicateTransient)
	int32 InputNodeId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NonTransactional, Transient, DuplicateTransient)
	int32 InputObjectNodeId;

	UPROPERTY(EditAnywhere, DuplicateTransient)
	FGuid Guid;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DuplicateTransient)
	bool bHasChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DuplicateTransient)
	bool bNeedsToTriggerUpdate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DuplicateTransient)
	bool bTransformChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bImportAsReference;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bImportAsReferenceRotScaleEnabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bImportAsReferenceBboxEnabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bImportAsReferenceMaterialEnabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> MaterialReferences;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCanDeleteHoudiniNodes;

public:
	UHoudiniInputObject();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniInputObject) { return 0; }
