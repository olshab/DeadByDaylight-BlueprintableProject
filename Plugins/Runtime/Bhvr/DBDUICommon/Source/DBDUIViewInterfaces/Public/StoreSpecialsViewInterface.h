#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "AuricCellsBundleViewData.h"
#include "StoreSpecialsViewInterface.generated.h"

class UStoreSpecialsItemViewData;

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UStoreSpecialsViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IStoreSpecialsViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetSpecialsData(const TArray<UStoreSpecialsItemViewData*>& specialsData);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetAuricCellsSpecialOfferData(const FAuricCellsBundleViewData& auricCellsSpecialOfferData);

};
