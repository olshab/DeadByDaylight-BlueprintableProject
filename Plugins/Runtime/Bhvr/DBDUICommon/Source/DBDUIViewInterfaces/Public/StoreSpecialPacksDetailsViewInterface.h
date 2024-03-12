#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "StoreSpecialPacksDetailsViewInterface.generated.h"

class UStoreSpecialPackViewData;
class UStoreChapterPackViewData;

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UStoreSpecialPacksDetailsViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IStoreSpecialPacksDetailsViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetSpecialPackData(UStoreSpecialPackViewData* data);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetChapterPackData(UStoreChapterPackViewData* data);

};
