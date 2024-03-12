#pragma once

#include "CoreMinimal.h"
#include "BhvrAssetViewCameraSequence.generated.h"

class ULevelSequence;
class ALevelSequenceActor;

USTRUCT(BlueprintType)
struct FBhvrAssetViewCameraSequence
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ULevelSequence* Sequence;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ALevelSequenceActor* SequenceActor;

public:
	BHVRASSETVIEWER_API FBhvrAssetViewCameraSequence();
};

FORCEINLINE uint32 GetTypeHash(const FBhvrAssetViewCameraSequence) { return 0; }
