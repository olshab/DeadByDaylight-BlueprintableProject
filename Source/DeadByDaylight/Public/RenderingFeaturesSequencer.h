#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RenderingFeaturesSequencer.generated.h"

class ADBDAggregateCullDistanceVolumes;
class UWorld;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API URenderingFeaturesSequencer : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ADBDAggregateCullDistanceVolumes* _aggregateCullDistanceVolumes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UWorld* _world;

public:
	URenderingFeaturesSequencer();
};

FORCEINLINE uint32 GetTypeHash(const URenderingFeaturesSequencer) { return 0; }
