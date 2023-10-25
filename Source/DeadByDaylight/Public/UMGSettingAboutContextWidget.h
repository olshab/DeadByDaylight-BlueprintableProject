#pragma once

#include "CoreMinimal.h"
#include "UMGSettingContextWidget.h"
#include "UMGSettingAboutContextWidget.generated.h"

class UUMGSettingContextButton;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGSettingAboutContextWidget : public UUMGSettingContextWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGSettingContextButton* EULAButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGSettingContextButton* CreditsButton;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetVersionNumber(const FString& versionNumber);

public:
	UUMGSettingAboutContextWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGSettingAboutContextWidget) { return 0; }
