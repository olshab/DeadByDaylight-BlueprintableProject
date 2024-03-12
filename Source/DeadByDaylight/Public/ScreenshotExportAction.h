#pragma once

#include "CoreMinimal.h"
#include "ScreenshotExportAction.generated.h"

USTRUCT(BlueprintType)
struct FScreenshotExportAction
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ExportOnce;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IncludeDLCFolder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IncludeCharacterFolder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> Directories;

public:
	DEADBYDAYLIGHT_API FScreenshotExportAction();
};

FORCEINLINE uint32 GetTypeHash(const FScreenshotExportAction) { return 0; }
