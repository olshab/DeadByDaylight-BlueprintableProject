#pragma once

#include "CoreMinimal.h"
#include "PartyMemberUIData.generated.h"

USTRUCT(BlueprintType)
struct FPartyMemberUIData
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _isLocalPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _isReady;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FString _mirrorId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FString _playerName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	int32 _playerId;

public:
	DEADBYDAYLIGHT_API FPartyMemberUIData();
};

FORCEINLINE uint32 GetTypeHash(const FPartyMemberUIData) { return 0; }
