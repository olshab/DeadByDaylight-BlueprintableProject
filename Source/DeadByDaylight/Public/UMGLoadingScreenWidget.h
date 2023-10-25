#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGLoadingScreenWidget.generated.h"

class UTextBlock;
class UImage;
class UProgressBar;
class UPanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class UUMGLoadingScreenWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* HintIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UProgressBar* LoadingBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UPanelWidget* KillerPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UPanelWidget* SurvivorPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* Title;

public:
	UUMGLoadingScreenWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGLoadingScreenWidget) { return 0; }
