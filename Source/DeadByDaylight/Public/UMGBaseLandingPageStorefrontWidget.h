#pragma once

#include "CoreMinimal.h"
#include "EStorefrontState.h"
#include "UMGBaseStorefrontWidget.h"
#include "UObject/SoftObjectPtr.h"
#include "UObject/NoExportTypes.h"
#include "UMGBaseLandingPageStorefrontWidget.generated.h"

class UHorizontalBox;
class UVerticalBox;
class UUMGLandingPageButtonWidget;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGBaseLandingPageStorefrontWidget : public UUMGBaseStorefrontWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UHorizontalBox* BigButtonsSlot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UVerticalBox* SmallButtonsSlot1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UVerticalBox* SmallButtonsSlot2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<UUMGLandingPageButtonWidget> SmallButtonClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<UUMGLandingPageButtonWidget> MediumButtonClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<UUMGLandingPageButtonWidget> BigButtonClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor DisabledButtonColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText DisabledButtonText;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	TArray<UUMGLandingPageButtonWidget*> _landingPageTabs;

private:
	UFUNCTION(BlueprintCallable)
	void HandleTabSelected(const EStorefrontState& tabId);

public:
	UUMGBaseLandingPageStorefrontWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGBaseLandingPageStorefrontWidget) { return 0; }
