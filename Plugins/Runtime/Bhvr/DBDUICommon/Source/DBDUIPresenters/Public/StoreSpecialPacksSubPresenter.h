#pragma once

#include "CoreMinimal.h"
#include "StoreSubPresenter.h"
#include "StoreHeritagePackViewData.h"
#include "StoreSpecialPacksSubPresenter.generated.h"

class UStoreSpecialPackViewData;
class UStoreChapterPackViewData;

UCLASS(Blueprintable)
class DBDUIPRESENTERS_API UStoreSpecialPacksSubPresenter : public UStoreSubPresenter
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<UStoreSpecialPackViewData*> _specialPacks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<UStoreChapterPackViewData*> _chapterPacks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<FStoreHeritagePackViewData> _heritagePacks;

private:
	UFUNCTION(BlueprintCallable)
	void OnSpecialPackClicked(const FString& packId);

	UFUNCTION(BlueprintCallable)
	void OnPackBuyClicked(const FString& packId);

	UFUNCTION(BlueprintCallable)
	void OnHeritagePackBuyClicked(const FString& packId);

	UFUNCTION(BlueprintCallable)
	void OnCustomizationClicked(const FString& packId, const FName& customizationId);

	UFUNCTION(BlueprintCallable)
	void OnCharacterClicked(const FString& packId, const int32 characterIndex);

	UFUNCTION(BlueprintCallable)
	void OnChapterPackClicked(const FString& packId);

	UFUNCTION(BlueprintCallable)
	void OnArchivePassClicked(const FString& packId, const FName& archiveId);

public:
	UStoreSpecialPacksSubPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UStoreSpecialPacksSubPresenter) { return 0; }
