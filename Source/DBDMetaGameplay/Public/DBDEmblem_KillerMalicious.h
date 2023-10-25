#pragma once

#include "CoreMinimal.h"
#include "DBDEmblem.h"
#include "DBDEmblem_KillerMalicious.generated.h"

class ACamperPlayer;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class UDBDEmblem_KillerMalicious : public UDBDEmblem
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<ACamperPlayer*, int32> _remainingSurvivorHookStates;

public:
	UFUNCTION(BlueprintCallable)
	void OnLevelReadyToPlay();

public:
	UDBDEmblem_KillerMalicious();
};

FORCEINLINE uint32 GetTypeHash(const UDBDEmblem_KillerMalicious) { return 0; }
