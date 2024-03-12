#pragma once

#include "CoreMinimal.h"
#include "StartupInitializer.h"
#include "ClientStartupInitializerInterface.h"
#include "ClientStartupInitializer.generated.h"

UCLASS(Blueprintable)
class STARTUPINITIALIZER_API UClientStartupInitializer : public UStartupInitializer, public IClientStartupInitializerInterface
{
	GENERATED_BODY()

private:
	UFUNCTION(BlueprintCallable)
	void OnMysteryBoxStatusLoaded(bool succeeded);

	UFUNCTION(BlueprintCallable)
	void OnDynamicContentLoaded(bool success);

public:
	UClientStartupInitializer();
};

FORCEINLINE uint32 GetTypeHash(const UClientStartupInitializer) { return 0; }
