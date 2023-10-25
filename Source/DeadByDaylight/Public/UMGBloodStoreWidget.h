#pragma once

#include "CoreMinimal.h"
#include "OnBloodNodePurchaseEvent.h"
#include "MobileBaseUserWidget.h"
#include "OnBloodStoreRegenerateEvent.h"
#include "OnBloodNodeSelectedEvent.h"
#include "OnCharacterRoleButtonClickedEvent.h"
#include "UMGBloodStoreWidget.generated.h"

class UUMGBloodStoreSubMenu;
class UUMGBloodStoreArrayWidget;
class UUMGBloodStoreItemPreviewWidget;

UCLASS(Blueprintable, EditInlineNew)
class UUMGBloodStoreWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnBloodNodeSelectedEvent OnBloodNodeSelected;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnBloodNodePurchaseEvent OnBloodNodePurchase;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnBloodStoreRegenerateEvent OnBloodStoreRegenerate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnCharacterRoleButtonClickedEvent OnCharacterRoleButtonClicked;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGBloodStoreArrayWidget* BloodStoreArrayWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGBloodStoreItemPreviewWidget* ItemPreviewWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGBloodStoreSubMenu* BloodStoreSubMenuWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText _bloodStoreTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText _killersTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText _survivorsTitle;

private:
	UFUNCTION(BlueprintCallable)
	void UnselectNode();

	UFUNCTION(BlueprintCallable)
	void SwitchRole();

	UFUNCTION(BlueprintCallable)
	void SetSelectedNode(const FString& selectedId);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetFaction(bool isKiller);

private:
	UFUNCTION(BlueprintCallable)
	void RegenerateBloodStore();

	UFUNCTION(BlueprintCallable)
	void PurchaseSelectedNode();

public:
	UUMGBloodStoreWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGBloodStoreWidget) { return 0; }
