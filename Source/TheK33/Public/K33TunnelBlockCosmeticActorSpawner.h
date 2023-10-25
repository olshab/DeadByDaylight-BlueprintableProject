#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "K33CosmeticTunnelBlockSpawnInfo.h"
#include "UObject/SoftObjectPtr.h"
#include "K33TunnelBlockCosmeticActorSpawner.generated.h"

class AK33TunnelBlockCosmetic;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEK33_API UK33TunnelBlockCosmeticActorSpawner : public USceneComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FK33CosmeticTunnelBlockSpawnInfo _cosmeticBlockSpawnInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TSoftClassPtr<AK33TunnelBlockCosmetic> _selectedTunnelBlockCosmeticClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 _editorVariationIndex;

public:
	UK33TunnelBlockCosmeticActorSpawner();
};

FORCEINLINE uint32 GetTypeHash(const UK33TunnelBlockCosmeticActorSpawner) { return 0; }
