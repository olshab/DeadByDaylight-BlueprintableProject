#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EK25ChainAnchorPointDirection.h"
#include "EK25ChainAttachmentLimbType.h"
#include "K25SurvivorChainAttachmentData.generated.h"

class ACamperPlayer;

USTRUCT(BlueprintType)
struct FK25SurvivorChainAttachmentData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName AnchorName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EK25ChainAnchorPointDirection Direction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector RelativeLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsFlexibleLimb;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EK25ChainAttachmentLimbType LimbType;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ACamperPlayer* _attachedSurvivor;

public:
	THEK25_API FK25SurvivorChainAttachmentData();
};

FORCEINLINE uint32 GetTypeHash(const FK25SurvivorChainAttachmentData) { return 0; }
