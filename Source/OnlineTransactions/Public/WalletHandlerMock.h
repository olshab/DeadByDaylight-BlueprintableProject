#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WalletHandlerMock.generated.h"

UCLASS(Blueprintable)
class UWalletHandlerMock : public UObject
{
	GENERATED_BODY()

public:
	UWalletHandlerMock();
};

FORCEINLINE uint32 GetTypeHash(const UWalletHandlerMock) { return 0; }
