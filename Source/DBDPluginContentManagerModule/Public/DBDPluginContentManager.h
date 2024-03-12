#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DBDPluginContentManager.generated.h"

UCLASS(Blueprintable)
class UDBDPluginContentManager : public UObject
{
	GENERATED_BODY()

public:
	UDBDPluginContentManager();
};

FORCEINLINE uint32 GetTypeHash(const UDBDPluginContentManager) { return 0; }
