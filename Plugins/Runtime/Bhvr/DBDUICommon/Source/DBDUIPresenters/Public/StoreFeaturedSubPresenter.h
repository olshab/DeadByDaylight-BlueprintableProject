#pragma once

#include "CoreMinimal.h"
#include "StoreRedirectionData.h"
#include "StoreSubPresenter.h"
#include "StoreFeaturedCharacterViewData.h"
#include "MysteryBoxStatus.h"
#include "StoreFeaturedSubPresenter.generated.h"

class UStoreCustomizationItemViewData;
class UStoreFeaturedChapterPackViewData;

UCLASS(Blueprintable)
class DBDUIPRESENTERS_API UStoreFeaturedSubPresenter : public UStoreSubPresenter
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<UStoreCustomizationItemViewData*> _itemsViewData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<FStoreFeaturedCharacterViewData> _charactersViewData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UStoreFeaturedChapterPackViewData* _chapterPackViewData;

private:
	UFUNCTION(BlueprintCallable)
	void RequestMoveToCharactersPage(const FStoreRedirectionData& storeRedirectionData);

	UFUNCTION(BlueprintCallable)
	void RequestMoveToChapterPacksPage(const FString& chapterPackId);

	UFUNCTION(BlueprintCallable)
	void OnMysteryBoxStatusLoaded(bool succeeded, const FString& campaign, const FMysteryBoxStatus& status);

	UFUNCTION(BlueprintCallable)
	void OnMysteryBoxClaimComplete(bool succeeded, const FString& campaign, const FMysteryBoxStatus& status);

	UFUNCTION(BlueprintCallable)
	void OnMysteryBoxClaimClicked();

	UFUNCTION(BlueprintCallable)
	void OnMysteryBoxClaimableStatusChanged(const FString& campaign, const FMysteryBoxStatus& status);

public:
	UFUNCTION(BlueprintCallable)
	void OnBackendStoreDataReceived(bool success);

public:
	UStoreFeaturedSubPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UStoreFeaturedSubPresenter) { return 0; }
