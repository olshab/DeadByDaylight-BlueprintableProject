#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ControlModeManager.generated.h"

class UGameInstance;

UCLASS(Blueprintable)
class DBDINPUT_API UControlModeManager : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UGameInstance* _gameInstance;

public:
	UControlModeManager();
};

FORCEINLINE uint32 GetTypeHash(const UControlModeManager) { return 0; }
