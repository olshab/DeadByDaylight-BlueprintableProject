#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BhvrAssetLightingSystem.generated.h"

class ABhvrAssetLightingRig;

UCLASS(Blueprintable)
class BHVRASSETVIEWER_API ABhvrAssetLightingSystem : public AActor
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSelectedLightingRigChanged);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FSelectedLightingRigChanged SelectedLightingRigChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<ABhvrAssetLightingRig*> LightingRigs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ABhvrAssetLightingRig* SelectedLightingRig;

public:
	UFUNCTION(BlueprintCallable)
	void SelectLightingRig(const FString& InDisplayName);

public:
	ABhvrAssetLightingSystem();
};

FORCEINLINE uint32 GetTypeHash(const ABhvrAssetLightingSystem) { return 0; }
