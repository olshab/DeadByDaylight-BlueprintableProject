#pragma once

#include "CoreMinimal.h"
#include "AssetViewerViewDataSourceSelectionStateChanged.generated.h"

class UBhvrAssetViewDataSource;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAssetViewerViewDataSourceSelectionStateChanged, UBhvrAssetViewDataSource*, OldAssetViewDataSource, UBhvrAssetViewDataSource*, NewAssetViewDataSource);
