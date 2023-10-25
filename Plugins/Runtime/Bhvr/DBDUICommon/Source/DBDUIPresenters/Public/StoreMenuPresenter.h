#pragma once

#include "CoreMinimal.h"
#include "EStoreMenuState.h"
#include "Presenter.h"
#include "Templates/SubclassOf.h"
#include "StoreMenuPresenter.generated.h"

class UStoreCollectionsSubPresenter;
class UShopManager;
class UUserWidget;
class UStoreCharactersSubPresenter;
class UStoreSubPresenter;
class UStoreFeaturedSubPresenter;
class UStoreBundlesSubPresenter;

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
	UStoreCollectionsSubPresenter* _storeCollectionsSubPresenter;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UStoreBundlesSubPresenter* _storeBundlesSubPresenter;

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
	void OnMenuTabSelected(EStoreMenuState menuState, bool alreadySelected);

	UFUNCTION(BlueprintCallable)
	void OnBackAction();

	UFUNCTION(BlueprintCallable)
	void OnAllStoreDataLoadComplete(bool success);

public:
	UStoreMenuPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UStoreMenuPresenter) { return 0; }
