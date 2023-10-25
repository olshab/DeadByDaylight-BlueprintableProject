#pragma once

#include "CoreMinimal.h"
#include "UObject/ScriptInterface.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "DedicatedServerManager.generated.h"

class UOnlineSystemHandler;
class IDedicatedServerStartupInitializerInterface;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UDedicatedServerManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TScriptInterface<IDedicatedServerStartupInitializerInterface> _startupInitializer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UOnlineSystemHandler* _onlineSystemHandler;

public:
	UDedicatedServerManager();
};

FORCEINLINE uint32 GetTypeHash(const UDedicatedServerManager) { return 0; }
