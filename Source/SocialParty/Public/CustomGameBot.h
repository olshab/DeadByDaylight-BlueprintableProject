#pragma once

#include "CoreMinimal.h"
#include "Loadout.h"
#include "CustomGameBot.generated.h"

USTRUCT(BlueprintType)
struct FCustomGameBot
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	uint8 role;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	uint8 diff;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 charIdx;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 slotIdx;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FString GUID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FString name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FLoadout loadout;

public:
	SOCIALPARTY_API FCustomGameBot();
};

FORCEINLINE uint32 GetTypeHash(const FCustomGameBot) { return 0; }
