#pragma once

#include "CoreMinimal.h"
#include "AssetViewControllerLoadingStateChanged.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAssetViewControllerLoadingStateChanged, bool, bNewValue);
