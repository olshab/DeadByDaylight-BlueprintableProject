#pragma once

#include "CoreMinimal.h"
#include "EStoreMenuState.h"
#include "ECurrencyType.h"
#include "UObject/SoftObjectPtr.h"
#include "Presenter.h"
#include "StoreMenuPresenter.generated.h"

class UStoreSpecialPacksSubPresenter;
class UStoreCollectionsSubPresenter;
class UShopManager;
class UStoreCharactersSubPresenter;
class UStoreSpecialsSubPresenter;
class UUserWidget;
class UStoreFeaturedSubPresenter;
class UStoreSubPresenter;
class UMatchmakingMonitor;
class USubPresenter;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIPRESENTERS_API UStoreMenuPresenter : public UPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<UUserWidget> StoreMenuWidgetClass;

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
	UStoreCharactersSubPresenter* _storeKillersSubPresenter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UStoreCharactersSubPresenter* _storeSurvivorsSubPresenter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UStoreSubPresenter* _activeSubPresenter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UShopManager* _shopManager;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UMatchmakingMonitor* _matchmakingMonitor;

private:
	UFUNCTION(BlueprintCallable)
	void ShowArchivePassPopup(const FName& archiveId);

	UFUNCTION(BlueprintCallable)
	void ResetBackActionLabel() const;

	UFUNCTION(BlueprintCallable)
	void OpenRedeemCodePopup();

	UFUNCTION(BlueprintCallable)
	void OpenAuricCellsOverlay();

	UFUNCTION(BlueprintCallable)
	void OnStopSubPresenterAsyncOperation(USubPresenter* subPresenter);

	UFUNCTION(BlueprintCallable)
	void OnStartSubPresenterAsyncOperation(USubPresenter* subPresenter);

	UFUNCTION(BlueprintCallable)
	void OnNotEnoughCurrencyModalButtonClicked(const ECurrencyType currencyType);

	UFUNCTION(BlueprintCallable)
	void OnMenuTabSelected(EStoreMenuState menuState);

	UFUNCTION(BlueprintCallable)
	void OnBackActionLabelChangeRequested(const FText& newLabel) const;

	UFUNCTION(BlueprintCallable)
	void OnBackAction();

	UFUNCTION(BlueprintCallable)
	void OnAsyncLoadSuccess();

public:
	UStoreMenuPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UStoreMenuPresenter) { return 0; }
