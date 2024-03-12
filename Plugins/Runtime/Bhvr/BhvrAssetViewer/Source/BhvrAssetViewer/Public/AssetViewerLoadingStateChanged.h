#pragma once

#include "CoreMinimal.h"
#include "AssetViewerLoadingStateChanged.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAssetViewerLoadingStateChanged, bool, bNewValue);
