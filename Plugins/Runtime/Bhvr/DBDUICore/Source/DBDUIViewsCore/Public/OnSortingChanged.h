#pragma once

#include "CoreMinimal.h"
#include "EItemSorting.h"
#include "OnSortingChanged.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSortingChanged, const EItemSorting, sortingType);
