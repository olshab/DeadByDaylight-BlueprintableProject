#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "OnLoadoutWidgetSlotClickedEvent.h"
#include "OnLoadoutWidgetInventoryItemUnselectedEvent.h"
#include "OnLoadoutWidgetInventoryItemSelectedEvent.h"
#include "UMGSwitcherScreen.generated.h"

class UUMGCharacterSelectionWidget;
class UUMGLoadoutWidget;
class UWidgetSwitcher;
class UUMGBloodStoreWidget;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGSwitcherScreen : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnLoadoutWidgetSlotClickedEvent OnLoadoutWidgetSlotClicked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnLoadoutWidgetInventoryItemSelectedEvent OnLoadoutWidgetInventoryItemSelected;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnLoadoutWidgetInventoryItemUnselectedEvent OnLoadoutWidgetInventoryItemUnselected;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UWidgetSwitcher* ContainerWidgetSwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGBloodStoreWidget* BloodStoreWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGLoadoutWidget* LoadoutWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGCharacterSelectionWidget* CharacterSelectionWidget;

protected:
	UFUNCTION(BlueprintCallable)
	void BroadcastSlotClickedEvent(int32 loadoutSlot);

	UFUNCTION(BlueprintCallable)
	void BroadcastItemUnSelectedEvent(int32 itemIndex);

	UFUNCTION(BlueprintCallable)
	void BroadcastItemSelectedEvent(int32 itemIndex);

	UFUNCTION(BlueprintCallable)
	void BroadcastCharacterSelectedEvent(int32 characterIndex);

	UFUNCTION(BlueprintCallable)
	void BroadcastCharacterRoleButtonClickedEvent();

	UFUNCTION(BlueprintCallable)
	void BroadcastCharacterInfoButtonClickedEvent();

	UFUNCTION(BlueprintCallable)
	void BroadcastBloodStoreRegenerate(int32 characterId);

	UFUNCTION(BlueprintCallable)
	void BroadcastBloodNodeSelected(int32 characterId, int32 nodeId, int32 nodeDepth);

	UFUNCTION(BlueprintCallable)
	void BroadcastBloodNodePurchase(int32 characterId);

public:
	UUMGSwitcherScreen();
};

FORCEINLINE uint32 GetTypeHash(const UUMGSwitcherScreen) { return 0; }
