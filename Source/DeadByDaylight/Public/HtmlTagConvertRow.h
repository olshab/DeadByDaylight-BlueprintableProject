#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HtmlTagConvertRow.generated.h"

USTRUCT(BlueprintType)
struct FHtmlTagConvertRow: public FTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString HtmlTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString RichTextTag;

public:
	DEADBYDAYLIGHT_API FHtmlTagConvertRow();
};

FORCEINLINE uint32 GetTypeHash(const FHtmlTagConvertRow) { return 0; }
