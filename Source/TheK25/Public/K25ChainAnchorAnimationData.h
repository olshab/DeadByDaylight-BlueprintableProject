#pragma once

#include "CoreMinimal.h"
#include "K25ChainAnchorAnimationData.generated.h"

class AK25Chain;

USTRUCT(BlueprintType)
struct FK25ChainAnchorAnimationData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ChainPullAngle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ChainWeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ChainHeight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool HasChainAttached;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsChainBeingRemoved;

	UPROPERTY(EditAnywhere)
	TWeakObjectPtr<AK25Chain> AttachedChain;

public:
	THEK25_API FK25ChainAnchorAnimationData();
};

FORCEINLINE uint32 GetTypeHash(const FK25ChainAnchorAnimationData) { return 0; }
