#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "UObject/SoftObjectPtr.h"
#include "ArchivesVignetteEntry.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FArchivesVignetteEntry: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Title;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Text;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool HasAudio;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> RewardImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float PreviewTextureOffset;

public:
	DEADBYDAYLIGHT_API FArchivesVignetteEntry();
};

FORCEINLINE uint32 GetTypeHash(const FArchivesVignetteEntry) { return 0; }
