#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "StoreMysteryBoxViewData.h"
#include "StoreFeaturedCharacterViewData.h"
#include "StoreFeaturedViewInterface.generated.h"

class UStoreCustomizationItemViewData;
class UStoreFeaturedChapterPackViewData;

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UStoreFeaturedViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IStoreFeaturedViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void PresentMysteryBoxClaimResult(bool succeeded, const FStoreMysteryBoxViewData& mysteryBoxViewData);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void InitMysteryBox(const FStoreMysteryBoxViewData& mysteryBoxViewData);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void InitFeaturedCustomizationItems(const TArray<UStoreCustomizationItemViewData*>& viewDataArray);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void InitFeaturedCharacters(const TArray<FStoreFeaturedCharacterViewData>& characterViewDataArray);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void InitFeaturedChapterPack(UStoreFeaturedChapterPackViewData* viewData);

};
