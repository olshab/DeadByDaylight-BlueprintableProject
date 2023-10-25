#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "MaterialReplacerData.h"
#include "ConditionalMaterialReplacer.h"
#include "BPAttachementSocketData.generated.h"

class UAccessory;
class USkeletalMesh;

USTRUCT(BlueprintType)
struct FBPAttachementSocketData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<UAccessory> AccessoryBlueprint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<USkeletalMesh> SkeletalMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName SocketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FMaterialReplacerData> MaterialsMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FConditionalMaterialReplacer ConditionalMaterialReplacer;

public:
	DEADBYDAYLIGHT_API FBPAttachementSocketData();
};

FORCEINLINE uint32 GetTypeHash(const FBPAttachementSocketData) { return 0; }
