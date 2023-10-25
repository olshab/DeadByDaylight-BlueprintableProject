#pragma once

#include "CoreMinimal.h"
#include "BackendCinematicsContentData.generated.h"

USTRUCT(BlueprintType)
struct FBackendCinematicsContentData
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FString Id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool AllowSkip;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FString StartDate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FString EndDate;

public:
	DEADBYDAYLIGHT_API FBackendCinematicsContentData();
};

FORCEINLINE uint32 GetTypeHash(const FBackendCinematicsContentData) { return 0; }
