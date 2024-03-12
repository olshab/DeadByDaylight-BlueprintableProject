#pragma once

#include "CoreMinimal.h"
#include "DBDFeatureLockProgress.generated.h"

USTRUCT(BlueprintType)
struct FDBDFeatureLockProgress
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _wasSeen;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _totalSteps;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _remainingSteps;

public:
	DBDSHAREDTYPES_API FDBDFeatureLockProgress();
};

FORCEINLINE uint32 GetTypeHash(const FDBDFeatureLockProgress) { return 0; }
