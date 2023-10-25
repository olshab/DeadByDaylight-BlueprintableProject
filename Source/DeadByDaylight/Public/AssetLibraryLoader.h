#pragma once

#include "CoreMinimal.h"
#include "AssetLibraryLoader.generated.h"

class UAssetLibrary;

USTRUCT(BlueprintType)
struct FAssetLibraryLoader
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UAssetLibrary* AssetLibrary;

public:
	DEADBYDAYLIGHT_API FAssetLibraryLoader();
};

FORCEINLINE uint32 GetTypeHash(const FAssetLibraryLoader) { return 0; }
