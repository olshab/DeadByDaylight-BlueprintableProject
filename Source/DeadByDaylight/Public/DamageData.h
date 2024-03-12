#pragma once

#include "CoreMinimal.h"
#include "DamageData.generated.h"

class ADBDPlayer;

USTRUCT(BlueprintType)
struct FDamageData
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _damagedWithoutChangingRegressionState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _isRegressing;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	bool _isIntense;

	UPROPERTY(EditAnywhere, Transient)
	TWeakObjectPtr<ADBDPlayer> _lastDamageChangeSource;

public:
	DEADBYDAYLIGHT_API FDamageData();
};

FORCEINLINE uint32 GetTypeHash(const FDamageData) { return 0; }
