#pragma once

#include "CoreMinimal.h"
#include "EStoreMenuState.h"
#include "Presenter.h"
#include "Templates/SubclassOf.h"
#include "StoreMenuPresenter.generated.h"

class UStoreSpecialPacksSubPresenter;
class UStoreCollectionsSubPresenter;
class UShopManager;
class UStoreCharactersSubPresenter;
class UStoreSpecialsSubPresenter;
class UUserWidget;
class UStoreFeaturedSubPresenter;
class UStoreSubPresenter;
class USubPresenter;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIPRESENTERS_API UStoreMenuPresenter : public UPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> StoreMenuWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName DisplayStandName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float InStoreCameraTransitionDurationSeconds;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UStoreFeaturedSubPresenter* _storeFeaturedSubPresenter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UStoreSpecialsSubPresenter* _storeSpecialsSubPresenter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UStoreCollectionsSubPresenter* _storeCollectionsSubPresenter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UStoreSpecialPacksSubPresenter* _storeSpecialPacksSubPresenter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UStoreCharactersSubPresenter* _storeCharactersSubPresenter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UStoreSubPresenter* _activeSubPresenter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UShopManager* _shopManager;

private:
	UFUNCTION(BlueprintCallable)
	void OpenRedeemCodePopup();

	UFUNCTION(BlueprintCallable)
	void OpenAuricCellsOverlay();

	UFUNCTION(BlueprintCallable)
	void OnStopSubPresenterAsyncOperation(USubPresenter* subPresenter);

	UFUNCTION(BlueprintCallable)
	void OnStartSubPresenterAsyncOperation(USubPresenter* subPresenter);

	UFUNCTION(BlueprintCallable)
	void OnMoveToCharactersPageRequested(int32 characterIndex);

	UFUNCTION(BlueprintCallable)
	void OnMenuTabSelected(EStoreMenuState menuState, bool alreadySelected);

	UFUNCTION(BlueprintCallable)
	void OnBackAction();

	UFUNCTION(BlueprintCallable)
	void OnAllStoreDataLoadComplete(bool success);

public:
	UStoreMenuPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UStoreMenuPresenter) { return 0; }
