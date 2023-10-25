#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ProfileLoadEventData.generated.h"

USTRUCT(BlueprintType)
struct FProfileLoadEventData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool FirstTimePlaying;

	UPROPERTY(EditAnywhere, Transient)
	FDateTime Timestamp;

public:
	DEADBYDAYLIGHT_API FProfileLoadEventData();
};

FORCEINLINE uint32 GetTypeHash(const FProfileLoadEventData) { return 0; }
