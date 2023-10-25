#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DBDSocialNotificationFactory.generated.h"

class UToastManager;
class UDataTable;
class UFriendManager;
class UDBDGameInstance;
class UDBDPartyFacade;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UDBDSocialNotificationFactory : public UObject
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, Transient)
	TWeakObjectPtr<UDBDGameInstance> _gameInstance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UToastManager* _toastMgr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UDBDPartyFacade* _partyFacade;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UFriendManager* _friendManager;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UDataTable* _toastTable;

public:
	UDBDSocialNotificationFactory();
};

FORCEINLINE uint32 GetTypeHash(const UDBDSocialNotificationFactory) { return 0; }
