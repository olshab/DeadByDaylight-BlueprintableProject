#pragma once

#include "CoreMinimal.h"
#include "BaseCameraTargetingStrategy.h"
#include "GunslingerCameraTargetingStrategy.generated.h"

UCLASS(Blueprintable)
class THEGUNSLINGER_API UGunslingerCameraTargetingStrategy : public UBaseCameraTargetingStrategy
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _cameraSocketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _survivorHarpoonSocketName;

public:
	UGunslingerCameraTargetingStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UGunslingerCameraTargetingStrategy) { return 0; }
