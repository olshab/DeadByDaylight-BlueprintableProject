#pragma once

#include "CoreMinimal.h"
#include "DBDEmblem.h"
#include "Templates/SubclassOf.h"
#include "DBDEmblem_KillerChaser.generated.h"

class UDBDRankDesignTunables;
class ADBDPlayer;
class UCurveFloat;
class ACamperPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UDBDEmblem_KillerChaser : public UDBDEmblem
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UCurveFloat* _chasePointsByDurationCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<ACamperPlayer*, float> _hookedPlayersPenaltyDelay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSubclassOf<UDBDRankDesignTunables> _rankTunablesClass;

public:
	UFUNCTION(BlueprintCallable)
	void OnChaseStart(ADBDPlayer* chasedPlayer);

public:
	UDBDEmblem_KillerChaser();
};

FORCEINLINE uint32 GetTypeHash(const UDBDEmblem_KillerChaser) { return 0; }
