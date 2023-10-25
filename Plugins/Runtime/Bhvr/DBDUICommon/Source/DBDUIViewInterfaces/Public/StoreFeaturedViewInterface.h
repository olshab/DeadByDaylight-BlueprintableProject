#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "StoreFeaturedCharacterViewData.h"
#include "StoreFeaturedViewInterface.generated.h"

class UStoreCustomizationItemViewData;
class UStoreSpecialOfferItemViewData;

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
	void SetSpecialOffersData(const TArray<UStoreSpecialOfferItemViewData*>& specialOffersData);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void InitFeaturedCustomizationItems(const TArray<UStoreCustomizationItemViewData*>& viewDataArray);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void InitFeaturedCharacters(const TArray<FStoreFeaturedCharacterViewData>& characterViewDataArray);

};
