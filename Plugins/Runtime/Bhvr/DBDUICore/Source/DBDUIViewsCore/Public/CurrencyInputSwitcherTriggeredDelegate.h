#pragma once

#include "CoreMinimal.h"
#include "ECurrencyType.h"
#include "CurrencyInputSwitcherTriggeredDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCurrencyInputSwitcherTriggeredDelegate, const ECurrencyType, currencyType);
