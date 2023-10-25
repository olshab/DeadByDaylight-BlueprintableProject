#pragma once

#include "CoreMinimal.h"
#include "EmblemTunableItem.generated.h"

USTRUCT(BlueprintType)
struct FEmblemTunableItem
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Id;

	UPROPERTY(EditAnywhere)
	double Value;

public:
	S3COMMAND_API FEmblemTunableItem();
};

FORCEINLINE uint32 GetTypeHash(const FEmblemTunableItem) { return 0; }
