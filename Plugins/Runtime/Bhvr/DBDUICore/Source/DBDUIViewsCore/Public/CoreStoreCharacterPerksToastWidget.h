#pragma once

#include "CoreMinimal.h"
#include "EPlayerRole.h"
#include "Input/Events.h"
#include "CoreKeyListenerButtonWidget.h"
#include "CoreStoreCharacterPerksToastWidget.generated.h"

class UWidget;
class UCoreMenuPowerWidget;
class UMenuPowerViewData;
class UCoreMenuPerkWidget;
class UCoreButtonWidget;
class UCharacterPerkViewData;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreStoreCharacterPerksToastWidget : public UCoreKeyListenerButtonWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UWidget* SafeArea;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool isOpen;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreMenuPowerWidget* CoreKillerPower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreMenuPerkWidget* CorePerk_1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreMenuPerkWidget* CorePerk_2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCoreMenuPerkWidget* CorePerk_3;

private:
	UFUNCTION(BlueprintCallable)
	void ShowTooltip(UCoreButtonWidget* hoveredSlotWidget);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void Show();

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

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OpenToast();

private:
	UFUNCTION()
	void OnPlayerClick(const FPointerEvent& pointerEvent);

	UFUNCTION(BlueprintCallable)
	void HideTooltip(UCoreButtonWidget* unhoveredSlotWidget);

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void Hide();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void CloseToast();

public:
	UCoreStoreCharacterPerksToastWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStoreCharacterPerksToastWidget) { return 0; }
