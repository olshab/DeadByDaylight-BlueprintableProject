#pragma once

#include "CoreMinimal.h"
#include "BaseLockerInteraction.h"
#include "DBDTunableRowHandle.h"
#include "LockerFakeEnterInteraction.generated.h"

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class DBDINTERACTION_API ULockerFakeEnterInteraction : public UBaseLockerInteraction
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _lockerInteractionBlockTime;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _fakeEnterLoudNoiseRange;

public:
	ULockerFakeEnterInteraction();
};

FORCEINLINE uint32 GetTypeHash(const ULockerFakeEnterInteraction) { return 0; }
