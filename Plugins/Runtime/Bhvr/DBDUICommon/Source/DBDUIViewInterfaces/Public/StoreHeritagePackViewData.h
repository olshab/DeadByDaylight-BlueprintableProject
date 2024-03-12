#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "StoreHeritagePackViewData.generated.h"

class UTexture2D;
class UStoreChapterPackViewData;

USTRUCT(BlueprintType)
struct FStoreHeritagePackViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString HeritageId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TSoftObjectPtr<UTexture2D> PackImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<UStoreChapterPackViewData*> ChapterPacks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 SortOrder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsNew;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsOwned;

public:
	DBDUIVIEWINTERFACES_API FStoreHeritagePackViewData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreHeritagePackViewData) { return 0; }
