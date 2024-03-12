#pragma once

#include "CoreMinimal.h"
#include "ECurrencyType.h"
#include "NotEnoughCurrencyButtonClickedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNotEnoughCurrencyButtonClickedDelegate, const ECurrencyType, currencyType);
