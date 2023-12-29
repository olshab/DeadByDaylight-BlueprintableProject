#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "MainMenuButtonViewData.h"
#include "MainMenuViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UMainMenuViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IMainMenuViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetEventButton(bool isEventActive, const FMainMenuButtonViewData& data);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetBloodPointBonus(bool isOnKiller, const FMainMenuButtonViewData& data);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetArchivesButton(const FMainMenuButtonViewData& data);

};
