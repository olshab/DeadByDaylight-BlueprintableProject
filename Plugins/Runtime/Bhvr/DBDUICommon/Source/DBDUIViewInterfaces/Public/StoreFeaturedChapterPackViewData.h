#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SoftRemoteContentCacheObjectPtr.h"
#include "StoreFeaturedChapterPackViewData.generated.h"

UCLASS(Blueprintable)
class DBDUIVIEWINTERFACES_API UStoreFeaturedChapterPackViewData : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FSoftRemoteContentCacheObjectPtr Image;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText Title;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString AssociatedDlcId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsOwned;

public:
	UStoreFeaturedChapterPackViewData();
};

FORCEINLINE uint32 GetTypeHash(const UStoreFeaturedChapterPackViewData) { return 0; }
