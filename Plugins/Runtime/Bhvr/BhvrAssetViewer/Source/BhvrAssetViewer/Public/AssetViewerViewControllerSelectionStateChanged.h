#pragma once

#include "CoreMinimal.h"
#include "AssetViewerViewControllerSelectionStateChanged.generated.h"

class UBhvrAssetViewController;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAssetViewerViewControllerSelectionStateChanged, UBhvrAssetViewController*, OldAssetViewController, UBhvrAssetViewController*, NewAssetViewController);
