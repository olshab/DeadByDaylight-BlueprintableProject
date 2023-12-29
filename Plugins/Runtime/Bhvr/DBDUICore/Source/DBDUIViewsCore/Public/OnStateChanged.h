#pragma once

#include "CoreMinimal.h"
#include "EItemFilterOption.h"
#include "OnStateChanged.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStateChanged, bool, isToggled, EItemFilterOption, itemFilterOption);
