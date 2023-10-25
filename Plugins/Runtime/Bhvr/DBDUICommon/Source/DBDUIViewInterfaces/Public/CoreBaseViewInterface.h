#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CoreBaseViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UCoreBaseViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API ICoreBaseViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnStopAsyncOperation();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnStartAsyncOperation();

};
