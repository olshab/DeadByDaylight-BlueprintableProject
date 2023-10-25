#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "OutlineConfig.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FOutlineConfig
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSoftObjectPtr<UMaterialInterface>> TranslucencyMaterials;

public:
	DEADBYDAYLIGHT_API FOutlineConfig();
};

FORCEINLINE uint32 GetTypeHash(const FOutlineConfig) { return 0; }
