#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "StoreCharactersCustomizationsViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UStoreCharactersCustomizationsViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IStoreCharactersCustomizationsViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetData();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Reset();

};
