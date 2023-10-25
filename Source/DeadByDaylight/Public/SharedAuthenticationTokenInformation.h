#pragma once

#include "CoreMinimal.h"
#include "SharedAuthenticationTokenInformation.generated.h"

USTRUCT(BlueprintType)
struct FSharedAuthenticationTokenInformation
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString LoginProvider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString AuthToken;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString TokenType;

public:
	DEADBYDAYLIGHT_API FSharedAuthenticationTokenInformation();
};

FORCEINLINE uint32 GetTypeHash(const FSharedAuthenticationTokenInformation) { return 0; }
