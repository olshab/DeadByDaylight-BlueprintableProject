#pragma once

#include "CoreMinimal.h"
#include "StoreSubPresenter.h"
#include "Templates/SubclassOf.h"
#include "StoreSpecialPacksSubPresenter.generated.h"

class UUserWidget;
class UStoreSpecialPackViewData;
class UStoreChapterPackViewData;

UCLASS(Blueprintable)
class DBDUIPRESENTERS_API UStoreSpecialPacksSubPresenter : public UStoreSubPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> StoreBundlesWidgetClass;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<UStoreSpecialPackViewData*> _specialPacks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<UStoreChapterPackViewData*> _chapterPacks;

private:
	UFUNCTION(BlueprintCallable)
	void OnSpecialPackBuyClicked(const FString& packId);

public:
	UStoreSpecialPacksSubPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UStoreSpecialPacksSubPresenter) { return 0; }
