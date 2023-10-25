#pragma once

#include "CoreMinimal.h"
#include "GamePersistentData.h"
#include "UObject/NoExportTypes.h"
#include "PlayerPersistentData.h"
#include "CloudInventoryItem.h"
#include "DBDPersistentData.generated.h"

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UDBDPersistentData : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FGamePersistentData _gamePersistentData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<FString> _keepDataIDs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<FString, FPlayerPersistentData> _playerIdToPersistentDataMap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	FPlayerPersistentData _localPlayerPersistentData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<FCloudInventoryItem> _cloudInventory;

public:
	UDBDPersistentData();
};

FORCEINLINE uint32 GetTypeHash(const UDBDPersistentData) { return 0; }
