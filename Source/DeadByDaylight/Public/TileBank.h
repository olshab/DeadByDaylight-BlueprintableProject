#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TileBank.generated.h"

class ATile;

UCLASS(Blueprintable)
class UTileBank : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<ATile*> _allTileBlueprints;

public:
	UTileBank();
};

FORCEINLINE uint32 GetTypeHash(const UTileBank) { return 0; }
