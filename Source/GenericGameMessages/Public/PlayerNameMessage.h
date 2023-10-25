#pragma once

#include "CoreMinimal.h"
#include "PlayerNameMessage.generated.h"

USTRUCT(BlueprintType)
struct FPlayerNameMessage
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name;

public:
	GENERICGAMEMESSAGES_API FPlayerNameMessage();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerNameMessage) { return 0; }
