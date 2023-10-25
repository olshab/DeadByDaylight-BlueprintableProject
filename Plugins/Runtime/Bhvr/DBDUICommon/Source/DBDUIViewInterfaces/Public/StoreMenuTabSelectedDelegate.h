#pragma once

#include "CoreMinimal.h"
#include "EStoreMenuState.h"
#include "StoreMenuTabSelectedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStoreMenuTabSelectedDelegate, EStoreMenuState, menuState, bool, alreadySelected);
