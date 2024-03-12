#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TabWidgetData.h"
#include "EChallengesMenuEventRitualsState.h"
#include "UObject/ScriptInterface.h"
#include "ChallengesMenuEventRitualsViewInterface.generated.h"

class IChallengesMenuEventRitualsRewardTrackViewInterface;
class IChallengesMenuEventRitualsStoreViewInterface;
class IChallengesMenuEventRitualsRitualsViewInterface;

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UChallengesMenuEventRitualsViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IChallengesMenuEventRitualsViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetTabSelected(const int32 key);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetTabsData(const TArray<FTabWidgetData>& tabsData, const int32 selectedKey);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetTabEnabled(const int32 key, const bool enabled);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetEventRitualsState(const EChallengesMenuEventRitualsState eventRitualsState);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	TScriptInterface<IChallengesMenuEventRitualsStoreViewInterface> GetStoreInterface() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	TScriptInterface<IChallengesMenuEventRitualsRitualsViewInterface> GetRitualsInterface() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	TScriptInterface<IChallengesMenuEventRitualsRewardTrackViewInterface> GetRewardTrackInterface() const;

};
