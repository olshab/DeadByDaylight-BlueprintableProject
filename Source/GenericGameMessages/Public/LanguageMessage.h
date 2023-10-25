#pragma once

#include "CoreMinimal.h"
#include "LanguageMessage.generated.h"

USTRUCT(BlueprintType)
struct FLanguageMessage
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Language;

public:
	GENERICGAMEMESSAGES_API FLanguageMessage();
};

FORCEINLINE uint32 GetTypeHash(const FLanguageMessage) { return 0; }
