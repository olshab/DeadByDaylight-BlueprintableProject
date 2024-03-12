#pragma once

#include "CoreMinimal.h"
#include "LockedFeatureElementViewInterface.h"
#include "MultipleDisableStateButtonViewInterface.h"
#include "MainMenuButtonViewInterface.h"
#include "DBDFeatureLockProgress.h"
#include "EButtonDisableState.h"
#include "CoreKeyListenerButtonWidget.h"
#include "EDBDFeatureType.h"
#include "CoreFooterButtonWidget.generated.h"

class UTexture2D;
class UDBDImage;

UCLASS(Blueprintable, EditInlineNew)
class UCoreFooterButtonWidget : public UCoreKeyListenerButtonWidget, public ILockedFeatureElementViewInterface, public IMultipleDisableStateButtonViewInterface, public IMainMenuButtonViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isFeatureGatingEnabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isUsingSubPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EDBDFeatureType _lockedFeatureType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FDBDFeatureLockProgress _lockedFeatureData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EButtonDisableState _buttonDisableState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText _tooltipLabelText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText _betaFeatureText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDImage* IconIMG;

protected:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void UpdateLockedFeatureVisuals(bool isLockedFeature);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetUnhoveredColor();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetSubPanelText(const FText& title, const FText& description);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetNotificationVisible(bool isVisible);

	UFUNCTION(BlueprintCallable)
	void SetIconTexture(UTexture2D* iconTexture);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetHoveredColor();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetBetaFeatureOverlayVisible(bool isVisible);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	bool IsLocked();

protected:
	UFUNCTION(BlueprintPure)
	bool HasValidLockedFeatureData() const;

public:
	UCoreFooterButtonWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreFooterButtonWidget) { return 0; }
