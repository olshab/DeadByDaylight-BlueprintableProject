#pragma once

#include "CoreMinimal.h"
#include "LoginJsonMessage.generated.h"

USTRUCT(BlueprintType)
struct FLoginJsonMessage
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString LoginJson;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString LoginType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString RoleID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsNewAccount;

public:
	GENERICGAMEMESSAGES_API FLoginJsonMessage();
};

FORCEINLINE uint32 GetTypeHash(const FLoginJsonMessage) { return 0; }
