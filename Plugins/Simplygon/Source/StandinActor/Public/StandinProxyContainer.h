#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StandinProxyEntry.h"
#include "StandinProxyContainer.generated.h"

UCLASS(Blueprintable)
class STANDINACTOR_API UStandinProxyContainer : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	TArray<FStandinProxyEntry> Standins;

public:
	UStandinProxyContainer();
};

FORCEINLINE uint32 GetTypeHash(const UStandinProxyContainer) { return 0; }
