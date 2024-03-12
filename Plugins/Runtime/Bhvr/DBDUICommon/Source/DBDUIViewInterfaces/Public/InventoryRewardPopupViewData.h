#pragma once

#include "CoreMinimal.h"
#include "GrantedRewardPopupViewData.h"
#include "InventoryRewardPopupViewData.generated.h"

UCLASS(Blueprintable)
class DBDUIVIEWINTERFACES_API UInventoryRewardPopupViewData : public UGrantedRewardPopupViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FName Id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 Amount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool HasGameSpecificData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString GameSpecificData;

public:
	UInventoryRewardPopupViewData();
};

FORCEINLINE uint32 GetTypeHash(const UInventoryRewardPopupViewData) { return 0; }
