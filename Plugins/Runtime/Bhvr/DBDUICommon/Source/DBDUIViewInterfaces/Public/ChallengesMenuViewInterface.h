#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TabWidgetData.h"
#include "UObject/ScriptInterface.h"
#include "EChallengesMenuState.h"
#include "ChallengesMenuViewInterface.generated.h"

class IChallengesMenuEventRitualsViewInterface;
class IChallengesMenuDailyRitualsViewInterface;

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UChallengesMenuViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IChallengesMenuViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetTitle(const FText& title);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetTabSelected(const int32 key);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetTabsData(const TArray<FTabWidgetData>& tabsData, const int32 selectedKey);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetTabEnabled(const int32 key, const bool enabled);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetSubtitle(const FText& subtitle);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetMenuState(const EChallengesMenuState menuState);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetIsFocused(const bool isFocused);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	TScriptInterface<IChallengesMenuEventRitualsViewInterface> GetChallengesMenuEventRitualsInterface() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	TScriptInterface<IChallengesMenuDailyRitualsViewInterface> GetChallengesMenuDailyRitualsInterface() const;

};
