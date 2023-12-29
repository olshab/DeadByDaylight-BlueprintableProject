#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StoreItemViewData.h"
#include "StoreSpecialsItemViewData.generated.h"

UCLASS(Blueprintable)
class DBDUIVIEWINTERFACES_API UStoreSpecialsItemViewData : public UStoreItemViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FDateTime EndTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UStoreItemViewData* Item;

public:
	UStoreSpecialsItemViewData();
};

FORCEINLINE uint32 GetTypeHash(const UStoreSpecialsItemViewData) { return 0; }
