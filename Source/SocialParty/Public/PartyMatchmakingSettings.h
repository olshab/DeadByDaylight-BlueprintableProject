#pragma once

#include "CoreMinimal.h"
#include "EMatchmakingState.h"
#include "PartyMatchmakingSettings.generated.h"

USTRUCT(BlueprintType)
struct FPartyMatchmakingSettings
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FString> _playerIds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	EMatchmakingState _matchmakingState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int64 _startMatchmakingDateTimestamp;

	UPROPERTY(EditAnywhere)
	uint32 _matchIncentive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _isInFinalCountdown;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 _postMatchmakingTransitionId;

public:
	SOCIALPARTY_API FPartyMatchmakingSettings();
};

FORCEINLINE uint32 GetTypeHash(const FPartyMatchmakingSettings) { return 0; }
