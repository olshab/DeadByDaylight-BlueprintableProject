#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AlertRewardEventSkinUIDataRow.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FAlertRewardEventSkinUIDataRow: public FTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString EventThemeLabel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* BackgroundTexture;

public:
	DBDSHAREDTYPES_API FAlertRewardEventSkinUIDataRow();
};

FORCEINLINE uint32 GetTypeHash(const FAlertRewardEventSkinUIDataRow) { return 0; }
