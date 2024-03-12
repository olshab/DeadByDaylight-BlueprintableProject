#pragma once

#include "CoreMinimal.h"
#include "AssetViewDataLoadingStateChanged.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAssetViewDataLoadingStateChanged, bool, bNewValue);
