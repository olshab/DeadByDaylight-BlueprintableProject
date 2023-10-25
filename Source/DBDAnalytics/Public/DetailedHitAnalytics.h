#pragma once

#include "CoreMinimal.h"
#include "UniquelyIdentifiedAnalytic.h"
#include "DetailedHitAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FDetailedHitAnalytics: public FUniquelyIdentifiedAnalytic
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MatchId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString InstigatorMirrorsId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString TargetMirrorsId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Ping;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HitTimestamp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsValidHit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsValidDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsValidCollision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RecorderCacheTimespan;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaximumDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float CapsuleInflation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString InstigatorName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString HitPrimitiveName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float InstigatorCoordinateX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float InstigatorCoordinateY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float InstigatorCoordinateZ;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float InstigatorRotationX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float InstigatorRotationY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float InstigatorRotationZ;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TargetLocationInstigatorTimestamp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TargetCoordinateX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TargetCoordinateY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TargetCoordinateZ;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Distance;

public:
	DBDANALYTICS_API FDetailedHitAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FDetailedHitAnalytics) { return 0; }
