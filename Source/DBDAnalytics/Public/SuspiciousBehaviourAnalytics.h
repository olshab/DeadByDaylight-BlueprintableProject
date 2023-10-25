#pragma once

#include "CoreMinimal.h"
#include "BaseCheatAnalytics.h"
#include "SuspiciousBehaviourAnalytics.generated.h"

USTRUCT(BlueprintType)
struct FSuspiciousBehaviourAnalytics: public FBaseCheatAnalytics
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ExtraField1String;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int64 ExtraField1Integer;

	UPROPERTY(EditAnywhere)
	double ExtraField1Floating;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString ExtraField2String;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int64 ExtraField2Integer;

	UPROPERTY(EditAnywhere)
	double ExtraField2Floating;

public:
	DBDANALYTICS_API FSuspiciousBehaviourAnalytics();
};

FORCEINLINE uint32 GetTypeHash(const FSuspiciousBehaviourAnalytics) { return 0; }
