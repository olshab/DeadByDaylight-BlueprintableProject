#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DBDEasyAntiCheat.generated.h"

class UDBDGameInstance;

UCLASS(Blueprintable)
class UDBDEasyAntiCheat : public UObject
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UDBDGameInstance* _gameInstance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool _connectedToServer;

public:
	UDBDEasyAntiCheat();
};

FORCEINLINE uint32 GetTypeHash(const UDBDEasyAntiCheat) { return 0; }
