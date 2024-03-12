#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "StoreSpecialPacksListViewInterface.generated.h"

class UStoreSpecialPackViewData;
class UStoreChapterPackViewData;

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UStoreSpecialPacksListViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IStoreSpecialPacksListViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetSpecialPacksData(const TArray<UStoreSpecialPackViewData*>& data);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetChapterPacksData(const TArray<UStoreChapterPackViewData*>& data);

};
