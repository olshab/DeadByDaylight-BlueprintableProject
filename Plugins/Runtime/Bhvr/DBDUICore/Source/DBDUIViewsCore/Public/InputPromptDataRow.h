#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "InputCoreTypes.h"
#include "UObject/SoftObjectPtr.h"
#include "InputPromptDataRow.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FInputPromptDataRow: public FTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText InputLabel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FKey InputKey;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> PromptTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ShowLabel;

public:
	DBDUIVIEWSCORE_API FInputPromptDataRow();
};

FORCEINLINE uint32 GetTypeHash(const FInputPromptDataRow) { return 0; }
