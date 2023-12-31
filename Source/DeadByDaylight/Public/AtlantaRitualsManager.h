#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AtlantaRitualsManager.generated.h"

class UDBDGameInstance;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UAtlantaRitualsManager : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, Transient)
	TWeakObjectPtr<UDBDGameInstance> _gameInstance;

public:
	UAtlantaRitualsManager();
};

FORCEINLINE uint32 GetTypeHash(const UAtlantaRitualsManager) { return 0; }
