#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "DBDTableRowBaseWithId.h"
#include "EArchivesEventStyle.h"
#include "ArchiveDefinition.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FArchiveDefinition: public FDBDTableRowBaseWithId
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Title;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString PurchasePassPicturePath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString PurchaseTierPicturePath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText PurchasePassPopupMessage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EArchivesEventStyle EventStyle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftObjectPtr<UTexture2D> StoryBookMarkTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString StyleFrameLabel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString EventStoryLabel;

public:
	DEADBYDAYLIGHT_API FArchiveDefinition();
};

FORCEINLINE uint32 GetTypeHash(const FArchiveDefinition) { return 0; }
