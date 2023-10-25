#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "StoreCharactersSelectionViewInterface.generated.h"

class UStoreCharacterItemViewData;

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UStoreCharactersSelectionViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IStoreCharactersSelectionViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetData(const TArray<UStoreCharacterItemViewData*>& characters, int32 selectedCharacterIndex);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Reset();

};
