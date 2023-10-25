#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UObject/SoftObjectPtr.h"
#include "SceneLightingDescription.h"
#include "LightingData.generated.h"

class ABaseSky;
class AActor;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API ULightingData : public UDataAsset
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSoftClassPtr<ABaseSky> DefaultLighting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSoftClassPtr<ABaseSky> DefaultAtlantaLighting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FSceneLightingDescription> Descriptions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSoftClassPtr<AActor> AdaptiveShadowMapControllersActor;

public:
	ULightingData();
};

FORCEINLINE uint32 GetTypeHash(const ULightingData) { return 0; }
