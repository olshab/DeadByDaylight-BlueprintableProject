#pragma once

#include "CoreMinimal.h"
#include "DBDGameMode.h"
#include "CamperLoadout.h"
#include "DebugQuestModelExtArchiveObjective.h"
#include "SlasherLoadout.h"
#include "DBDDebugGameMode.generated.h"

class ADBDPlayer;
class ADBDPlayerController;

UCLASS(Blueprintable, NonTransient)
class DEADBYDAYLIGHT_API ADBDDebugGameMode : public ADBDGameMode
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TMap<ADBDPlayerController*, int32> LoadoutIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSet<ADBDPlayer*> PlayersWithItems;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FCamperLoadout> CamperPawnOverrides;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FSlasherLoadout> SlasherPawnOverrides;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FDebugQuestModelExtArchiveObjective> _questObjectives;

public:
	ADBDDebugGameMode();
};

FORCEINLINE uint32 GetTypeHash(const ADBDDebugGameMode) { return 0; }
