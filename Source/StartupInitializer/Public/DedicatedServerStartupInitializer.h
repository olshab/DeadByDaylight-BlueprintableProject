#pragma once

#include "CoreMinimal.h"
#include "DedicatedServerStartupInitializerInterface.h"
#include "StartupInitializer.h"
#include "DedicatedServerStartupInitializer.generated.h"

class UDBDTimeUtilities;

UCLASS(Blueprintable)
class STARTUPINITIALIZER_API UDedicatedServerStartupInitializer : public UStartupInitializer, public IDedicatedServerStartupInitializerInterface
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UDBDTimeUtilities* _dbdTimeUtilities;

public:
	UDedicatedServerStartupInitializer();
};

FORCEINLINE uint32 GetTypeHash(const UDedicatedServerStartupInitializer) { return 0; }
