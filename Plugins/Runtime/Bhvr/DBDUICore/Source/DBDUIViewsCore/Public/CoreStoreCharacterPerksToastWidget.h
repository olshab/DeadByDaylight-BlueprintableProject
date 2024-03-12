#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "EPlayerRole.h"
#include "Input/Events.h"
#include "CoreStoreCharacterPerksToastWidget.generated.h"

class UCoreMenuPowerWidget;
class UMenuPowerViewData;
class UWidget;
class UDBDTextBlock;
class UCoreMenuPerkWidget;
class UCoreButtonWidget;
class UCharacterPerkViewData;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreStoreCharacterPerksToastWidget : public UCoreBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDTextBlock* Title;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreMenuPowerWidget* CoreKillerPower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreMenuPerkWidget* CorePerk_1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreMenuPerkWidget* CorePerk_2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCoreMenuPerkWidget* CorePerk_3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<UWidget*> _ignoreClickWidgets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isOpen;

public:
	UFUNCTION(BlueprintCallable)
	void ToggleToastVisibility();

private:
	UFUNCTION(BlueprintCallable)
	void ShowTooltip(UCoreButtonWidget* hoveredSlotWidget);

protected:
	UFUNCTION(BlueprintCallable)
	void SetPerkData(UCoreMenuPerkWidget* perkWidget, UCharacterPerkViewData* perkViewData);

public:
	UFUNCTION(BlueprintPure=false, BlueprintCallable)
	void SetKillerPowerData(const UMenuPowerViewData* killerPowerViewData) const;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetCharacterRole(EPlayerRole role);

public:
	UFUNCTION(BlueprintCallable)
	void SetCharacterData(TArray<UCharacterPerkViewData*> characterUniquePerksViewData, EPlayerRole role);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OpenToast(bool isOpen);

private:
	UFUNCTION()
	void OnPlayerClick(const FPointerEvent& pointerEvent);

	UFUNCTION(BlueprintCallable)
	void HideTooltip(UCoreButtonWidget* unhoveredSlotWidget);

public:
	UCoreStoreCharacterPerksToastWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreCharacterPerksToastWidget) { return 0; }
