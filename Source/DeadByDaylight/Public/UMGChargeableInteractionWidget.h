#pragma once

#include "CoreMinimal.h"
#include "StatusEffectSlotData.h"
#include "MobileBaseUserWidget.h"
#include "Components/SlateWrapperTypes.h"
#include "EBarColor.h"
#include "UMGChargeableInteractionWidget.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGChargeableInteractionWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* ItemIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ESlateVisibility InteractionIconVisibility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ESlateVisibility ItemChargeVisibility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ESlateVisibility InteractionHudVisibility;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetSecondaryMessage(const FString& secondMessage);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetProgressbarValue(float value);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetProgressBarColor(const EBarColor barColor);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetProficiencyData(int32 index, const FStatusEffectSlotData& proficiencyData);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetOpacity(float opacity);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetMessage(const FString& message);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetItemChargeValue(float value);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetItemChargeColor(const EBarColor barColor);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ClearProficienciesData();

public:
	UUMGChargeableInteractionWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGChargeableInteractionWidget) { return 0; }
