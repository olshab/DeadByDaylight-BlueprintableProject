#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnlineSystemHandler.generated.h"

class UGameSessionDS;
class UCrossPlatformManager;
class UDBDServerInstance;
class ULocalPlayer;
class UDBDGameInstance;

UCLASS(Blueprintable, Transient)
class DEADBYDAYLIGHT_API UOnlineSystemHandler : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ULocalPlayer* _cachedLocalPlayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UDBDGameInstance* _gameInstance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UGameSessionDS* _gameSessionDS;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UDBDServerInstance* _serverInstance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UCrossPlatformManager* _crossPlatformManager;

public:
	UOnlineSystemHandler();
};

FORCEINLINE uint32 GetTypeHash(const UOnlineSystemHandler) { return 0; }
