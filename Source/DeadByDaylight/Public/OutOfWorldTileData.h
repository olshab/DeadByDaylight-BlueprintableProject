#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/SoftObjectPtr.h"
#include "OutOfWorldTileData.generated.h"

class ATile;

USTRUCT(BlueprintType)
struct FOutOfWorldTileData
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FVector _spawnLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TSoftClassPtr<ATile> _tileClass;

public:
	DEADBYDAYLIGHT_API FOutOfWorldTileData();
};

FORCEINLINE uint32 GetTypeHash(const FOutOfWorldTileData) { return 0; }
