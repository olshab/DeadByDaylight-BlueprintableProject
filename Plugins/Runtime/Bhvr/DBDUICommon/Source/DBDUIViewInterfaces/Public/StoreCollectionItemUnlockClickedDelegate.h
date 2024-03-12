#pragma once

#include "CoreMinimal.h"
#include "ECurrencyType.h"
#include "StoreCollectionItemUnlockClickedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStoreCollectionItemUnlockClickedDelegate, ECurrencyType, currencyType);
