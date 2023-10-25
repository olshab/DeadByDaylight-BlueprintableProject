#pragma once

#include "CoreMinimal.h"
#include "DBDLocatorComponent.h"
#include "AffectedMaterialAndVariant.h"
#include "DBDClipRegionComponent.generated.h"

class UDBDClipRegionComponent;
class UMeshComponent;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable, Abstract, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDBDClipRegionComponent : public UDBDLocatorComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FAffectedMaterialAndVariant> AffectedMaterialsAndVariants;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void NotifyShouldClipComponent(UMeshComponent* InMeshComponent);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	float ClipDistance(UMeshComponent* InMeshComponent);

public:
	UFUNCTION(BlueprintCallable)
	void ApplyClipToDynamicMaterial(UMaterialInstanceDynamic* dynamicInstanceToClip, int32 InRegionID);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void ApplyClip(UMaterialInstanceDynamic* InMaterial2clip, int32 InRegionID);

public:
	UFUNCTION(BlueprintCallable)
	static void ApplyArrayOfClipsToDynamicMaterial(TArray<UDBDClipRegionComponent*> InRegions, UMaterialInstanceDynamic* dynamicInstanceToClip);

public:
	UDBDClipRegionComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDBDClipRegionComponent) { return 0; }
