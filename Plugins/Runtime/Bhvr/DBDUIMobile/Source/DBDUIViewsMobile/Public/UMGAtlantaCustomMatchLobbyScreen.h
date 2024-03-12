#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGAtlantaCustomMatchLobbyScreen.generated.h"

class UUMGBaseButtonWidget;
class UVerticalBox;
class UTextBlock;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class DBDUIVIEWSMOBILE_API UUMGAtlantaCustomMatchLobbyScreen : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UUMGBaseButtonWidget* EditButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UVerticalBox* RulesBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UTextBlock* CustomMatchTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UTextBlock* MatchRulesTitle;

protected:
	UFUNCTION(BlueprintCallable)
	void HandleEditConfigButtonClicked();

public:
	UUMGAtlantaCustomMatchLobbyScreen();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlantaCustomMatchLobbyScreen) { return 0; }
