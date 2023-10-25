#pragma once

#include "CoreMinimal.h"
#include "PounceAttack.h"
#include "DBDTunableRowHandle.h"
#include "UObject/NoExportTypes.h"
#include "K24WhipAttack.generated.h"

class ADBDPlayer;
class ACamperPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEK24_API UK24WhipAttack : public UPounceAttack
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _attackSphereTraceRadius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTunableRowHandle _attackMinDistanceToObstruction;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FVector _whipMovementFromOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FVector _whipMovementToOffset;

private:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_HitBreakableOrZombie();

public:
	UFUNCTION(BlueprintCallable, Server, Reliable)
	void Server_ContaminatePlayer(ACamperPlayer* target, const float targetLocationTimestamp);

	UFUNCTION(BlueprintCallable, Client, Reliable)
	void Client_ContaminationResult(ADBDPlayer* target, bool isValid);

public:
	UK24WhipAttack();
};

FORCEINLINE uint32 GetTypeHash(const UK24WhipAttack) { return 0; }
