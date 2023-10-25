#pragma once

#include "CoreMinimal.h"
#include "ECustomizationCategory.h"
#include "StoreCustomizationCategorySelectedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStoreCustomizationCategorySelectedDelegate, ECustomizationCategory, category);
