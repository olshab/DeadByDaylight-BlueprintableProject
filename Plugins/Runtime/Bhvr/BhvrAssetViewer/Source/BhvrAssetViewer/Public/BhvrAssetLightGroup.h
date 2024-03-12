#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BhvrAssetLightGroup.generated.h"

UCLASS(Blueprintable)
class BHVRASSETVIEWER_API UBhvrAssetLightGroup : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float IntensityMultiplier;

public:
	UFUNCTION(BlueprintCallable)
	void SetIntensityMultiplier(float NewIntensityMultiplier);

public:
	UBhvrAssetLightGroup();
};

FORCEINLINE uint32 GetTypeHash(const UBhvrAssetLightGroup) { return 0; }
