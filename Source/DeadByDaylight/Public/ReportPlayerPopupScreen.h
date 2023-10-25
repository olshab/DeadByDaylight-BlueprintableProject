#pragma once

#include "CoreMinimal.h"
#include "GenericPopupScreen.h"
#include "ReportPlayerPopupScreen.generated.h"

UCLASS(Blueprintable)
class UReportPlayerPopupScreen : public UGenericPopupScreen
{
	GENERATED_BODY()

private:
	UFUNCTION(BlueprintCallable)
	void OnTextInputMouseOver(bool isMouseOver);

	UFUNCTION(BlueprintCallable)
	void OnConfirmReportPlayer(const FString& category, const FString& comment);

public:
	UReportPlayerPopupScreen();
};

FORCEINLINE uint32 GetTypeHash(const UReportPlayerPopupScreen) { return 0; }
