#pragma once

#include "CoreMinimal.h"
#include "UObject/ScriptInterface.h"
#include "DBDBaseGameMode.h"
#include "DBDGame_Start.generated.h"

class IClientStartupInitializerInterface;

UCLASS(Blueprintable, NonTransient)
class DEADBYDAYLIGHT_API ADBDGame_Start : public ADBDBaseGameMode
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TScriptInterface<IClientStartupInitializerInterface> _startupInitializer;

public:
	ADBDGame_Start();
};

FORCEINLINE uint32 GetTypeHash(const ADBDGame_Start) { return 0; }
