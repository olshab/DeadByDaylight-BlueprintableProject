#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AtlantaBaseEventsUIData.generated.h"

class UTexture2DDynamic;

USTRUCT(BlueprintType)
struct FAtlantaBaseEventsUIData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString EventId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText Title;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString CampaignName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UTexture2DDynamic* Image;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 EventPriority;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 BannerPriority;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString DeepLink;

	UPROPERTY(EditAnywhere, Transient)
	FDateTime StartDate;

	UPROPERTY(EditAnywhere, Transient)
	FDateTime EndDate;

	UPROPERTY(EditAnywhere, Transient)
	FDateTime DisplayStartDate;

	UPROPERTY(EditAnywhere, Transient)
	FDateTime DisplayEndDate;

	UPROPERTY(EditAnywhere, Transient)
	FDateTime BannerStartDate;

	UPROPERTY(EditAnywhere, Transient)
	FDateTime BannerEndDate;

	UPROPERTY(EditAnywhere, Transient)
	FDateTime HotStartDate;

	UPROPERTY(EditAnywhere, Transient)
	FDateTime HotEndDate;

	UPROPERTY(EditAnywhere, Transient)
	FDateTime NewStartDate;

	UPROPERTY(EditAnywhere, Transient)
	FDateTime NewEndDate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FString> RelatedItemsId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool mustHideParticipateButton;

public:
	DEADBYDAYLIGHT_API FAtlantaBaseEventsUIData();
};

FORCEINLINE uint32 GetTypeHash(const FAtlantaBaseEventsUIData) { return 0; }
