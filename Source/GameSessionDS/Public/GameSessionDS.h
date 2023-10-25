#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameSessionDS.generated.h"

UCLASS(Blueprintable)
class GAMESESSIONDS_API UGameSessionDS : public UObject
{
	GENERATED_BODY()

public:
	UGameSessionDS();
};

FORCEINLINE uint32 GetTypeHash(const UGameSessionDS) { return 0; }
