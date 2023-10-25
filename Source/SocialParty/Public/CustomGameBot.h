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
	uint8 _role;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	uint8 _difficulty;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 _characterIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 _slotIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FString _botGUID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FString _botName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FLoadout _loadout;

public:
	SOCIALPARTY_API FCustomGameBot();
};

FORCEINLINE uint32 GetTypeHash(const FCustomGameBot) { return 0; }
