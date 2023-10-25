#pragma once

#include "CoreMinimal.h"
#include "LoginMessage.generated.h"

USTRUCT(BlueprintType)
struct FLoginMessage
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MirrorsId;

public:
	GENERICGAMEMESSAGES_API FLoginMessage();
};

FORCEINLINE uint32 GetTypeHash(const FLoginMessage) { return 0; }
