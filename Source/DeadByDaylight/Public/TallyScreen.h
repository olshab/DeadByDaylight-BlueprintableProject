#pragma once

#include "CoreMinimal.h"
#include "ScreenBase.h"
#include "TallyScreen.generated.h"

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UTallyScreen : public UScreenBase
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintCallable)
	void OnSpectateButtonClick();

	UFUNCTION(BlueprintCallable)
	void OnShowSlasherInfos();

	UFUNCTION(BlueprintCallable)
	void OnReportPlayerButtonClick(const FString& playerId);

	UFUNCTION(BlueprintCallable)
	void OnRateMatch(int32 rateValue);

	UFUNCTION(BlueprintCallable)
	void OnPlayerOptionClick(const FString& krakenId, const FString& playerId, uint8 option);

	UFUNCTION(BlueprintCallable)
	void OnPlayerInfoClick(const FString& playerId);

	UFUNCTION(BlueprintCallable)
	void OnLevelingSequenceComplete();

	UFUNCTION(BlueprintCallable)
	void OnLeaveButtonClick();

	UFUNCTION(BlueprintCallable)
	void OnCustomerSupportButtonClick();

	UFUNCTION(BlueprintCallable)
	void OnBloodwebButtonClick();

public:
	UTallyScreen();
};

FORCEINLINE uint32 GetTypeHash(const UTallyScreen) { return 0; }
