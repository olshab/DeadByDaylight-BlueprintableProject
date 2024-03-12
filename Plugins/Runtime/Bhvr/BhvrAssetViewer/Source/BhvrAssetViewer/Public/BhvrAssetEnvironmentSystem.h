#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BhvrAssetEnvironmentSystem.generated.h"

class ABhvrAssetEnvironment;

UCLASS(Blueprintable)
class BHVRASSETVIEWER_API ABhvrAssetEnvironmentSystem : public AActor
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSelectedEnvironmentChanged);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FSelectedEnvironmentChanged SelectedEnvironmentChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<ABhvrAssetEnvironment*> Environments;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ABhvrAssetEnvironment* SelectedEnvironment;

public:
	UFUNCTION(BlueprintCallable)
	void SelectEnvironment(const FString& InDisplayName);

public:
	ABhvrAssetEnvironmentSystem();
};

FORCEINLINE uint32 GetTypeHash(const ABhvrAssetEnvironmentSystem) { return 0; }
