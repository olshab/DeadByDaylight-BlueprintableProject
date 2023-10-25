#pragma once

#include "CoreMinimal.h"
#include "PartySessionSettings.generated.h"

USTRUCT(BlueprintType)
struct FPartySessionSettings
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FString _sessionId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TMap<FString, FString> _gameSessionInfos;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FString _owningUserId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FString _owningUserName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _isDedicated;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int64 _matchmakingTimestamp;

public:
	SOCIALPARTY_API FPartySessionSettings();
};

FORCEINLINE uint32 GetTypeHash(const FPartySessionSettings) { return 0; }
