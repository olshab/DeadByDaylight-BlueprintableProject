#pragma once

#include "CoreMinimal.h"
#include "StorePresetSelectedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStorePresetSelectedDelegate, const int32, presetId);
