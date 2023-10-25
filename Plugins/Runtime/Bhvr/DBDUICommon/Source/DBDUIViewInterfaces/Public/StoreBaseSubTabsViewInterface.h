#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TabWidgetData.h"
#include "StoreBaseSubTabsViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UStoreBaseSubTabsViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IStoreBaseSubTabsViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetSubTabsData(const TArray<FTabWidgetData>& tabsData);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SelectSubTab(const int32 selectedKey);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void ActivateSubTabContent(const int32 state);

};
