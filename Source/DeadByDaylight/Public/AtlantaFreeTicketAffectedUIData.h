#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AtlantaFreeTicketAffectedUIData.generated.h"

USTRUCT(BlueprintType)
struct FAtlantaFreeTicketAffectedUIData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString InEffectBGFilePath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName Id;

	UPROPERTY(EditAnywhere)
	FDateTime EndDate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool HasFreeTicketToUse;

public:
	DEADBYDAYLIGHT_API FAtlantaFreeTicketAffectedUIData();
};

FORCEINLINE uint32 GetTypeHash(const FAtlantaFreeTicketAffectedUIData) { return 0; }
