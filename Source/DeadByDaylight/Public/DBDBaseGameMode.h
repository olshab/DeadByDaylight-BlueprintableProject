#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "DataTableDropdown.h"
#include "EGameType.h"
#include "DBDBaseGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class ADBDBaseGameMode : public AGameMode
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDataTableDropdown DebugSpecialEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	EGameType DebugGameType;

public:
	ADBDBaseGameMode();
};

FORCEINLINE uint32 GetTypeHash(const ADBDBaseGameMode) { return 0; }
