#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "CustomMatchTabConfig.generated.h"

class UUMGAtlantaMatchConfigPageScrollItem;

USTRUCT(BlueprintType)
struct FCustomMatchTabConfig
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ItemWidth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ItemHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Row;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Column;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<UUMGAtlantaMatchConfigPageScrollItem> OptionButtonClass;

public:
	DBDUIVIEWSMOBILE_API FCustomMatchTabConfig();
};

FORCEINLINE uint32 GetTypeHash(const FCustomMatchTabConfig) { return 0; }
