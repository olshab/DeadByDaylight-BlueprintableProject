#pragma once

#include "CoreMinimal.h"
#include "StoreSubPresenter.h"
#include "Templates/SubclassOf.h"
#include "ECustomizationCategory.h"
#include "StoreCategoryViewData.h"
#include "StoreCharactersFiltersData.h"
#include "StoreCharactersSubPresenter.generated.h"

class UUserWidget;
class UStoreCharacterItemViewData;
class UStoreCustomizationItemViewData;

UCLASS(Blueprintable)
class DBDUIPRESENTERS_API UStoreCharactersSubPresenter : public UStoreSubPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> StoreCharactersWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName DisplayStandName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CameraTransitionDurationSeconds;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<UStoreCharacterItemViewData*> _availableCharacters;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UStoreCharacterItemViewData* _selectedCharacter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<UStoreCustomizationItemViewData*> _availableCustomizations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<UStoreCustomizationItemViewData*> _filteredCustomizations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<FStoreCategoryViewData> _availableCategories;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FStoreCharactersFiltersData _charactersFilterData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FStoreCharactersFiltersData _customizationsFilterData;

private:
	UFUNCTION(BlueprintCallable)
	void OnDisplayStandPawnLoaded(int32 characterIndex);

	UFUNCTION(BlueprintCallable)
	void OnCustomizationsFiltersChanged(FStoreCharactersFiltersData customizationsFilterData);

	UFUNCTION(BlueprintCallable)
	void OnCustomizationSelected(FName customizationId, bool isSelected);

	UFUNCTION(BlueprintCallable)
	void OnCustomizationsClearFiltersClicked();

	UFUNCTION(BlueprintCallable)
	void OnCharactersFiltersChanged(FStoreCharactersFiltersData charactersFilterData);

	UFUNCTION(BlueprintCallable)
	void OnCharacterSelected(int32 characterIndex);

	UFUNCTION(BlueprintCallable)
	void OnCharactersClearFiltersClicked();

	UFUNCTION(BlueprintCallable)
	void OnCategorySelected(ECustomizationCategory category);

public:
	UStoreCharactersSubPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UStoreCharactersSubPresenter) { return 0; }
