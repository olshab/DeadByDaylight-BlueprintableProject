#pragma once

#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "MatchManagementScreen.generated.h"

UCLASS(Blueprintable)
class UMatchManagementScreen : public UScreenBase
{
	GENERATED_BODY()

private:
	UFUNCTION(BlueprintCallable)
	void OnRemoveMap(const FString& mapId);

	UFUNCTION(BlueprintCallable)
	void OnPerksSettingsChange(int32 value);

	UFUNCTION(BlueprintCallable)
	void OnOfferingsSettingsChange(int32 value);

	UFUNCTION(BlueprintCallable)
	void OnItemsAndAddonsSettingsChange(int32 value);

	UFUNCTION(BlueprintCallable)
	void OnBackButtonClick();

	UFUNCTION(BlueprintCallable)
	void OnApplyChangesClicked();

	UFUNCTION(BlueprintCallable)
	void OnAllowDlcSettingsClick();

	UFUNCTION(BlueprintCallable)
	void OnAddMap(const FString& mapId);

public:
	UMatchManagementScreen();
};

FORCEINLINE uint32 GetTypeHash(const UMatchManagementScreen) { return 0; }
