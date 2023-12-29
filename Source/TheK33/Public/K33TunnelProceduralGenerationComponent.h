#pragma once

#include "CoreMinimal.h"
#include "EK33TunnelBlockType.h"
#include "KillerSpecificGameStateComponent.h"
#include "K33TunnelBlockSpawnData.h"
#include "UObject/SoftObjectPtr.h"
#include "K33TunnelProceduralGenerationComponent.generated.h"

class AK33TunnelBlock;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UK33TunnelProceduralGenerationComponent : public UKillerSpecificGameStateComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing=OnRep_BlockSpawnData, meta=(AllowPrivateAccess=true))
	FK33TunnelBlockSpawnData _blocksSpawnData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TMap<EK33TunnelBlockType, TSoftClassPtr<AK33TunnelBlock>> _tunnelBlockAssetsReferences;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<EK33TunnelBlockType, UClass*> _tunnelBlockAssetClasses;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<AK33TunnelBlock*> _tunnelBlocks;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _blockSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float _basementHeightOffset;

private:
	UFUNCTION(BlueprintCallable)
	void OnRep_BlockSpawnData();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK33TunnelProceduralGenerationComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK33TunnelProceduralGenerationComponent) { return 0; }
