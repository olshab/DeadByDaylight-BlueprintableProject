#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "StoreHeritagePackViewData.h"
#include "StoreHeritagePacksListViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UStoreHeritagePacksListViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IStoreHeritagePacksListViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetData(const TArray<FStoreHeritagePackViewData>& data);

};
