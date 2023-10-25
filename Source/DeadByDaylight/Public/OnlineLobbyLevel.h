#pragma once

#include "CoreMinimal.h"
#include "LobbyLevel.h"
#include "UObject/NoExportTypes.h"
#include "OnlineLobbyLevel.generated.h"

class UProceduralGenerationData;
class ADisplayStand;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API AOnlineLobbyLevel : public ALobbyLevel
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UProceduralGenerationData* ProceduralGenerationData;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FVector> _onlineLobbySlasherPOVTrackerOffsets;

	UPROPERTY(EditAnywhere)
	TArray<TWeakObjectPtr<ADisplayStand>> _onlineLobbyCamperDisplayStands;

	UPROPERTY(EditAnywhere)
	TArray<TWeakObjectPtr<ADisplayStand>> _onlineLobbySlasherDisplayStands;

public:
	AOnlineLobbyLevel();
};

FORCEINLINE uint32 GetTypeHash(const AOnlineLobbyLevel) { return 0; }
