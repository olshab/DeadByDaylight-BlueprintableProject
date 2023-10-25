#pragma once

#include "CoreMinimal.h"
#include "EStoreCharactersMenuState.h"
#include "StoreSubPresenter.h"
#include "Templates/SubclassOf.h"
#include "ECustomizationCategory.h"
#include "StoreCharactersSubPresenter.generated.h"

class UUserWidget;
class UStoreCharacterItemViewData;

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

private:
	UFUNCTION(BlueprintCallable)
	void OnMenuTabSelected(EStoreCharactersMenuState menuState, bool alreadySelected);

	UFUNCTION(BlueprintCallable)
	void OnDisplayStandPawnLoaded(int32 characterIndex);

	UFUNCTION(BlueprintCallable)
	void OnCustomizationSelected(int32 customizationIndex);

	UFUNCTION(BlueprintCallable)
	void OnCustomizationCategorySelected(ECustomizationCategory category);

	UFUNCTION(BlueprintCallable)
	void OnCharacterSelected(int32 characterIndex);

public:
	UStoreCharactersSubPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UStoreCharactersSubPresenter) { return 0; }
