#pragma once

#include "CoreMinimal.h"
#include "Float_NetQuantize8.h"
#include "DBDTimer.generated.h"

USTRUCT(BlueprintType)
struct FDBDTimer
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _startTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _startTimeDirty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FFloat_NetQuantize8 _timeLeft;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _replicateTimeLeft;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _interpSpeed;

public:
	DEADBYDAYLIGHT_API FDBDTimer();
};

FORCEINLINE uint32 GetTypeHash(const FDBDTimer) { return 0; }
