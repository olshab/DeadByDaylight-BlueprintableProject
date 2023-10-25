#pragma once

#include "CoreMinimal.h"
#include "CustomGamePresetData.h"
#include "PartyMatchmakingSettings.h"
#include "PartySessionSettings.h"
#include "SocialPartyState.generated.h"

USTRUCT(BlueprintType)
struct FSocialPartyState
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FCustomGamePresetData _customGamePresetData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FPartySessionSettings _partySessionSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FPartyMatchmakingSettings _partyMatchmakingSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FName> _playerJoinOrder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TMap<FName, uint8> _playerChatIndices;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 _gameType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _isCrowdPlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _isUsingDedicatedServer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FString _version;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 _lastUpdatedTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 _lastSentTime;

public:
	SOCIALPARTY_API FSocialPartyState();
};

FORCEINLINE uint32 GetTypeHash(const FSocialPartyState) { return 0; }
