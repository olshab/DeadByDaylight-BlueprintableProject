#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGAtlantaLegalMenuScreen.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGAtlantaLegalMenuScreen : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetLegalText(const FString& title, const FString& legalText);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetButtonText(const FText& acceptText, const FText& declineText);

	UFUNCTION(BlueprintCallable)
	void HandleMenuButtonClickEvent(bool isAccept);

public:
	UUMGAtlantaLegalMenuScreen();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlantaLegalMenuScreen) { return 0; }
