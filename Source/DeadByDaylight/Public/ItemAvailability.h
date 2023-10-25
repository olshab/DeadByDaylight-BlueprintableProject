#pragma once

#include "CoreMinimal.h"
#include "EItemAvailability.h"
#include "ItemAvailability.generated.h"

USTRUCT(BlueprintType)
struct FItemAvailability
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	EItemAvailability itemAvailability;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FString DLCId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FString> AdditionalDlcIds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 CloudInventoryId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FString CommunityId;

public:
	DEADBYDAYLIGHT_API FItemAvailability();
};

FORCEINLINE uint32 GetTypeHash(const FItemAvailability) { return 0; }
