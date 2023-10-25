#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "AuricCellsFirstPurchaseViewData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FAuricCellsFirstPurchaseViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsFirstPurchase;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TSoftObjectPtr<UTexture2D> IconTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString Title;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString Description;

public:
	DBDUIVIEWINTERFACES_API FAuricCellsFirstPurchaseViewData();
};

FORCEINLINE uint32 GetTypeHash(const FAuricCellsFirstPurchaseViewData) { return 0; }
