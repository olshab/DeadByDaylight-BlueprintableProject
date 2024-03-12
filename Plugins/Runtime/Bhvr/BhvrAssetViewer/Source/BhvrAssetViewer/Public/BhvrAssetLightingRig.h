#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BhvrAssetLightingRig.generated.h"

class UBhvrAssetLightGroup;
class ULightComponent;

UCLASS(Blueprintable)
class BHVRASSETVIEWER_API ABhvrAssetLightingRig : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UBhvrAssetLightGroup* KeyLightGroup;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UBhvrAssetLightGroup* FillLightGroup;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UBhvrAssetLightGroup* RimLightGroup;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UBhvrAssetLightGroup* KickLightGroup;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UBhvrAssetLightGroup* FogLightGroup;

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	FString GetDisplayName();

protected:
	UFUNCTION(BlueprintCallable)
	void AddRimLight(ULightComponent* InLight);

	UFUNCTION(BlueprintCallable)
	void AddKickLight(ULightComponent* InLight);

	UFUNCTION(BlueprintCallable)
	void AddKeyLight(ULightComponent* InLight);

	UFUNCTION(BlueprintCallable)
	void AddFogLight(ULightComponent* InLight);

	UFUNCTION(BlueprintCallable)
	void AddFillLight(ULightComponent* InLight);

public:
	ABhvrAssetLightingRig();
};

FORCEINLINE uint32 GetTypeHash(const ABhvrAssetLightingRig) { return 0; }
