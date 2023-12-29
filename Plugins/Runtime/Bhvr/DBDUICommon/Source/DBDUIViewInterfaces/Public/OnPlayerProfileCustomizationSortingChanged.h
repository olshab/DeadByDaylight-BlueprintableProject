#pragma once

#include "CoreMinimal.h"
#include "EItemSorting.h"
#include "OnPlayerProfileCustomizationSortingChanged.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerProfileCustomizationSortingChanged, const EItemSorting, sortingType);
