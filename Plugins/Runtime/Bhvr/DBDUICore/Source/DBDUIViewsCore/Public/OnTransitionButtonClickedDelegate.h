#pragma once

#include "CoreMinimal.h"
#include "OnTransitionButtonClickedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTransitionButtonClickedDelegate, int32, chracterIndex);
