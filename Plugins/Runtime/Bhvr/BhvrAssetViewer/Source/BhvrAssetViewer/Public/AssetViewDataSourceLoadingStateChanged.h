#pragma once

#include "CoreMinimal.h"
#include "AssetViewDataSourceLoadingStateChanged.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAssetViewDataSourceLoadingStateChanged, bool, bNewValue);
