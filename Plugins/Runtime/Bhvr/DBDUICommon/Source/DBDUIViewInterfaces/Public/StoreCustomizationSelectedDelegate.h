#pragma once

#include "CoreMinimal.h"
#include "StoreCustomizationSelectedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStoreCustomizationSelectedDelegate, FName, customizationId, bool, isSelected);
