#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "UObject/SoftObjectPtr.h"
#include "SubscriptionUIData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FSubscriptionUIData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, FText> PlatformDetails;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> TitleTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> PortraitBorderTexture;

public:
	DEADBYDAYLIGHT_API FSubscriptionUIData();
};

FORCEINLINE uint32 GetTypeHash(const FSubscriptionUIData) { return 0; }
