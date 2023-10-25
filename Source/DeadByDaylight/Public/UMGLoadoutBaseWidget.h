#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "InventorySlotData.h"
#include "ELoadoutSlot.h"
#include "UMGLoadoutBaseWidget.generated.h"

class UUMGLoadoutItemButton;

UCLASS(Blueprintable, EditInlineNew)
class UUMGLoadoutBaseWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGLoadoutItemButton* ItemOrPowerButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGLoadoutItemButton* AddonFirstButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGLoadoutItemButton* AddonSecondButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGLoadoutItemButton* OfferingButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGLoadoutItemButton* PerkFirstButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGLoadoutItemButton* PerkSecondButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGLoadoutItemButton* PerkThirdButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGLoadoutItemButton* PerkFourthButton;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export)
	TArray<UUMGLoadoutItemButton*> LoadoutItemButtons;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool UsingMatchRules;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool PerkSlotsLockedByAdmin;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsSlasher;

public:
	UFUNCTION(BlueprintCallable)
	void SetLoadoutData(const TArray<FInventorySlotData>& loadoutData, bool usingMatchRulesNew, bool perkSlotsLockedByAdminNew, ELoadoutSlot loadoutSlot, bool isSlasherNew, bool isClickable);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetIsSelectedLoadoutItemButton(ELoadoutSlot loadoutSlot);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetDividerImageColor(FLinearColor color);

public:
	UUMGLoadoutBaseWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGLoadoutBaseWidget) { return 0; }
