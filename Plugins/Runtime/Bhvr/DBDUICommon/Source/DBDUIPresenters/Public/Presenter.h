#pragma once

#include "CoreMinimal.h"
#include "UIComponent.h"
#include "EContext.h"
#include "Components/SlateWrapperTypes.h"
#include "EPresenterPhase.h"
#include "Presenter.generated.h"

class UPresenterRequirementFunction;
class UUserWidget;
class UPresenterParentInfo;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class DBDUIPRESENTERS_API UPresenter : public UUIComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _overrideWidgetInstantiationPhase;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPresenterPhase _widgetInstantiationPhase;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool RequestPresentationAtBeginPlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ESlateVisibility InitialVisibility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _widgetZOrder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(BindWidget))
	UUserWidget* _widget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UPresenterParentInfo* _parentInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSet<FString> _ignoredPresentationRequirementFunctions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<UPresenterRequirementFunction*> _presentationRequirementFunctions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 _filter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 _currencyFilter;

private:
	UFUNCTION(BlueprintCallable)
	bool ShouldPresent() const;

protected:
	UFUNCTION(BlueprintCallable)
	void OnContextUnfocus(EContext context);

	UFUNCTION(BlueprintCallable)
	void OnContextFocus(EContext context);

	UFUNCTION(BlueprintCallable)
	void OnContextChanged(EContext context);

	UFUNCTION(BlueprintCallable)
	bool IsPlayerStateReady() const;

	UFUNCTION(BlueprintCallable)
	bool IsGameStateReady() const;

	UFUNCTION(BlueprintCallable)
	bool IsContextReady() const;

public:
	UPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UPresenter) { return 0; }
