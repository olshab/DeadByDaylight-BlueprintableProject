#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "HoudiniAsset.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class HOUDINIENGINERUNTIME_API UHoudiniAsset : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString AssetFileName;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<uint8> AssetBytes;

	UPROPERTY(EditAnywhere)
	uint32 AssetBytesCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool bAssetLimitedCommercial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool bAssetNonCommercial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool bAssetExpanded;

public:
	UHoudiniAsset();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniAsset) { return 0; }
