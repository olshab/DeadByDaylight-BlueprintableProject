#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "SecretBotMatchNamesDefinition.generated.h"

USTRUCT(BlueprintType)
struct FSecretBotMatchNamesDefinition: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 ID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString name;

public:
	ONBOARDING_API FSecretBotMatchNamesDefinition();
};

FORCEINLINE uint32 GetTypeHash(const FSecretBotMatchNamesDefinition) { return 0; }
