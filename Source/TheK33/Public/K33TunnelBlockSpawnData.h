#pragma once

#include "CoreMinimal.h"
#include "K33TunnelGridCellData.h"
#include "UObject/NoExportTypes.h"
#include "EK33TunnelBlockType.h"
#include "K33TunnelBlockSpawnData.generated.h"

USTRUCT(BlueprintType)
struct FK33TunnelBlockSpawnData
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FRotator _worldRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	EK33TunnelBlockType _blockType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FK33TunnelGridCellData _gridInfo;

public:
	THEK33_API FK33TunnelBlockSpawnData();
};

FORCEINLINE uint32 GetTypeHash(const FK33TunnelBlockSpawnData) { return 0; }
