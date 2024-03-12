#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BhvrAssetEnvironment.generated.h"

UCLASS(Blueprintable)
class BHVRASSETVIEWER_API ABhvrAssetEnvironment : public AActor
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	FString GetDisplayName();

public:
	ABhvrAssetEnvironment();
};

FORCEINLINE uint32 GetTypeHash(const ABhvrAssetEnvironment) { return 0; }
