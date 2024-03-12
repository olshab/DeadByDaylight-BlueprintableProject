#pragma once

#include "CoreMinimal.h"
#include "AssetViewDataSourceSelectionStateChanged.generated.h"

class UBhvrAssetViewData;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAssetViewDataSourceSelectionStateChanged, UBhvrAssetViewData*, OldAssetViewData, UBhvrAssetViewData*, NewAssetViewData);
