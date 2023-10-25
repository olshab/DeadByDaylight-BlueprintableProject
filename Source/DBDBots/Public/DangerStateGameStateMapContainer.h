#pragma once

#include "CoreMinimal.h"
#include "EAIGameState.h"
#include "EAIDangerState.h"
#include "DangerStateGameStateMapContainer.generated.h"

USTRUCT(BlueprintType)
struct FDangerStateGameStateMapContainer
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<EAIDangerState, EAIGameState> Map;

public:
	DBDBOTS_API FDangerStateGameStateMapContainer();
};

FORCEINLINE uint32 GetTypeHash(const FDangerStateGameStateMapContainer) { return 0; }
