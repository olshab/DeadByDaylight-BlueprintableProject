#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "DBDPrimaryDataAsset.h"
#include "GameplayModifierContainerDataAsset.generated.h"

class UActorComponent;
class UGameplayModifierContainerDataAsset;

UCLASS(Blueprintable, Abstract)
class DEADBYDAYLIGHT_API UGameplayModifierContainerDataAsset : public UDBDPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<UActorComponent> ModifierContainerComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSoftObjectPtr<UGameplayModifierContainerDataAsset>> RequiredModifierContainers;

public:
	UGameplayModifierContainerDataAsset();
};

FORCEINLINE uint32 GetTypeHash(const UGameplayModifierContainerDataAsset) { return 0; }
