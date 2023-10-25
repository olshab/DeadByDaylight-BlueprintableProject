#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "ArchivesVignetteEntry.h"
#include "UObject/SoftObjectPtr.h"
#include "ArchivesVignettes.generated.h"

class UMediaSource;

USTRUCT(BlueprintType)
struct FArchivesVignettes: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString VignetteId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Title;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Subtitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FArchivesVignetteEntry> Entries;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSoftObjectPtr<UMediaSource>> CinematicPaths;

public:
	DEADBYDAYLIGHT_API FArchivesVignettes();
};

FORCEINLINE uint32 GetTypeHash(const FArchivesVignettes) { return 0; }
