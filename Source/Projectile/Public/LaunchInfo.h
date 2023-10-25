#pragma once

#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "LaunchInfo.generated.h"

USTRUCT(BlueprintType)
struct FLaunchInfo
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector_NetQuantize StartPosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector_NetQuantizeNormal Direction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Speed;

public:
	PROJECTILE_API FLaunchInfo();
};

FORCEINLINE uint32 GetTypeHash(const FLaunchInfo) { return 0; }
