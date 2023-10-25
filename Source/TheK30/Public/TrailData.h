#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TrailData.generated.h"

class ATrailNode;
class AActor;

USTRUCT(BlueprintType)
struct FTrailData
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<ATrailNode*> _visualNodes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FVector> _navigationWaypoints;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	AActor* _owner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _isCompleted;

public:
	THEK30_API FTrailData();
};

FORCEINLINE uint32 GetTypeHash(const FTrailData) { return 0; }
