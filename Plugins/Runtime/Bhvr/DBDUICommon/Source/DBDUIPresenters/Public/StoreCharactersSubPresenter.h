#pragma once

#include "CoreMinimal.h"
#include "StoreSubPresenter.h"
#include "Templates/SubclassOf.h"
#include "EquippedPlayerCustomization.h"
#include "ESortingOption.h"
#include "ECustomizationCategory.h"
#include "StoreCategoryViewData.h"
#include "StoreCharactersFiltersData.h"
#include "AnimationPreviewRequest.h"
#include "ESortingOrder.h"
#include "ECurrencyType.h"
#include "StoreCharactersSubPresenter.generated.h"

class UUserWidget;
class UStoreCharacterItemViewData;
class UStoreCustomizationItemViewData;
class UAnimationPreviewSubsystem;

UCLASS(Blueprintable)
class DBDUIPRESENTERS_API UStoreCharactersSubPresenter : public UStoreSubPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> StoreCharactersWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName DisplayStandName;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<UStoreCharacterItemViewData*> _availableCharacters;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<UStoreCharacterItemViewData*> _displayingCharacters;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<int32, UStoreCharacterItemViewData*> _charactersMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<UStoreCustomizationItemViewData*> _availableCustomizations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<UStoreCustomizationItemViewData*> _displayingCustomizations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<FName, UStoreCustomizationItemViewData*> _customizationsMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FEquippedPlayerCustomization _equippedCustomization;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FEquippedPlayerCustomization _selectedCustomization;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<FStoreCategoryViewData> _availableCategories;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FStoreCharactersFiltersData _charactersFilterData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ESortingOption _charactersSortingOption;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ESortingOrder _charactersSortingOrder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FStoreCharactersFiltersData _customizationsFilterData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ESortingOption _customizationsSortingOption;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ESortingOrder _customizationsSortingOrder;

private:
	UFUNCTION(BlueprintCallable)
	void PlayMoriAnimation();

	UFUNCTION(BlueprintCallable)
	void OnZoomCharmClicked();

	UFUNCTION(BlueprintCallable)
	void OnPresetSelected(const int32 presetId);

	UFUNCTION(BlueprintCallable)
	void OnCustomizationUnlockCompleted(bool success);

	UFUNCTION(BlueprintCallable)
	void OnCustomizationUnlockClicked(ECurrencyType currencyType);

	UFUNCTION(BlueprintCallable)
	void OnCustomizationsSortingChanged(const ESortingOption sortingOption, const ESortingOrder sortingOrder);

	UFUNCTION(BlueprintCallable)
	void OnCustomizationsFiltersChanged(const FStoreCharactersFiltersData& customizationsFilterData);

	UFUNCTION(BlueprintCallable)
	void OnCustomizationSelected(const FName customizationId, const bool isSelected);

	UFUNCTION(BlueprintCallable)
	void OnCustomizationSelectAllClicked();

	UFUNCTION(BlueprintCallable)
	void OnCustomizationSearchBarTextChanged(const FString& enteredText);

	UFUNCTION(BlueprintCallable)
	void OnCustomizationsClearFiltersClicked();

	UFUNCTION(BlueprintCallable)
	void OnCustomizationEquipClicked();

	UFUNCTION(BlueprintCallable)
	void OnCustomizationEquipAllClicked();

	UFUNCTION(BlueprintCallable)
	void OnCustomizationAlternativeUnlockClicked();

	UFUNCTION(BlueprintCallable)
	void OnCharmSlotSelected(const int32 slotIndex);

	UFUNCTION(BlueprintCallable)
	void OnCharacterUnlockCompleted(bool success);

	UFUNCTION(BlueprintCallable)
	void OnCharacterUnlockClicked(ECurrencyType currencyType);

	UFUNCTION(BlueprintCallable)
	void OnCharactersSortingChanged(const ESortingOption sortingOption, const ESortingOrder sortingOrder);

	UFUNCTION(BlueprintCallable)
	void OnCharactersSearchBarTextChanged(const FString& enteredText);

	UFUNCTION(BlueprintCallable)
	void OnCharactersFiltersChanged(const FStoreCharactersFiltersData& charactersFilterData);

	UFUNCTION(BlueprintCallable)
	void OnCharacterSelected(const int32 characterIndex);

	UFUNCTION(BlueprintCallable)
	void OnCharactersClearFiltersClicked();

	UFUNCTION(BlueprintCallable)
	void OnCharacterEquipClicked();

	UFUNCTION(BlueprintCallable)
	void OnCharacterAlternativeUnlockClicked();

	UFUNCTION(BlueprintCallable)
	void OnCategorySelected(const ECustomizationCategory category);

	UFUNCTION(BlueprintCallable)
	void OnAnimationPreviewComplete(UAnimationPreviewSubsystem* animationPreviewSubsystem, const FAnimationPreviewRequest& request, bool completedSuccessfully);

public:
	UStoreCharactersSubPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UStoreCharactersSubPresenter) { return 0; }
