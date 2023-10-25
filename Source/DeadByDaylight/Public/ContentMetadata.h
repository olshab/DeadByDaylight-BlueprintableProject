#pragma once

#include "CoreMinimal.h"
#include "ContentMetadata.generated.h"

USTRUCT(BlueprintType)
struct FContentMetadata
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool RebootClient;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString DeploymentDate;

public:
	DEADBYDAYLIGHT_API FContentMetadata();
};

FORCEINLINE uint32 GetTypeHash(const FContentMetadata) { return 0; }
