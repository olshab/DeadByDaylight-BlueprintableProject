#pragma once

#include "CoreMinimal.h"
#include "StatProperty.h"
#include "DBDAttackTargetTracker.generated.h"

class ACharacter;
class ADBDPlayer;

USTRUCT(BlueprintType)
struct FDBDAttackTargetTracker
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _useTargetTracking;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FStatProperty _targetSnapDistance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _ownerEyeSocketName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FName _targetBoneName;

	UPROPERTY(EditAnywhere, Transient)
	TWeakObjectPtr<ACharacter> _trackedTarget;

	UPROPERTY(EditAnywhere, Transient)
	TWeakObjectPtr<ADBDPlayer> _owningPlayer;

public:
	DEADBYDAYLIGHT_API FDBDAttackTargetTracker();
};

FORCEINLINE uint32 GetTypeHash(const FDBDAttackTargetTracker) { return 0; }
