#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "UObject/SoftObjectPtr.h"
#include "InGameAssetPreloaderComponent.generated.h"

class UInGameAssetPreloaderGatherer;
class UObject;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UInGameAssetPreloaderComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSet<FPrimaryAssetId> _generalPrimaryAssetIds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSet<TSoftClassPtr<UObject>> _generalRegularAssets;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<TSubclassOf<UInGameAssetPreloaderGatherer>> _assetGathererClasses;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<UInGameAssetPreloaderGatherer*> _assetGatherers;

public:
	UInGameAssetPreloaderComponent();
};

FORCEINLINE uint32 GetTypeHash(const UInGameAssetPreloaderComponent) { return 0; }
