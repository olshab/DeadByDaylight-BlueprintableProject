#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/SoftObjectPtr.h"
#include "TimerFlagViewData.h"
#include "StoreChapterPackViewData.generated.h"

class UTexture2D;
class UStoreCharacterItemViewData;
class UStoreCustomizationItemViewData;

UCLASS(Blueprintable)
class DBDUIVIEWINTERFACES_API UStoreChapterPackViewData : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString Id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText DisplayTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString HeritagePackId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TSoftObjectPtr<UTexture2D> PackImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<UStoreCharacterItemViewData*> CharactersData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<UStoreCustomizationItemViewData*> CustomizationsData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 SortOrder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsNew;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsOwned;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsIndividuallyAvailable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FDateTime ActivationStartDate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FDateTime ActivationEndDate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FTimerFlagViewData TimerViewData;

public:
	UStoreChapterPackViewData();
};

FORCEINLINE uint32 GetTypeHash(const UStoreChapterPackViewData) { return 0; }
