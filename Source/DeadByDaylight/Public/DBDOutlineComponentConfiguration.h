#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "Engine/DataAsset.h"
#include "OutlineConfig.h"
#include "OutlineOverrideConfig.h"
#include "OutlineColourConfiguration.h"
#include "GameplayTagContainer.h"
#include "DBDOutlineComponentConfiguration.generated.h"

class UObject;
class UMaterialInterface;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UDBDOutlineComponentConfiguration : public UDataAsset
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<TSoftClassPtr<UObject>, FOutlineConfig> OutlineConfigs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, FOutlineColourConfiguration> OutlineColours;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSoftObjectPtr<UMaterialInterface>> TranslucencyDefaultMaterials;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FGameplayTag, FOutlineOverrideConfig> OutlineOverrideConfigs;

public:
	UDBDOutlineComponentConfiguration();
};

FORCEINLINE uint32 GetTypeHash(const UDBDOutlineComponentConfiguration) { return 0; }
