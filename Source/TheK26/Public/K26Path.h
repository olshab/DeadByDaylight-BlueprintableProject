#pragma once

#include "CoreMinimal.h"
#include "K26Path.generated.h"

class AK26PathPart;

USTRUCT(BlueprintType)
struct FK26Path
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AK26PathPart* PathEndArrow;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<AK26PathPart*> PathParts;

public:
	THEK26_API FK26Path();
};

FORCEINLINE uint32 GetTypeHash(const FK26Path) { return 0; }
