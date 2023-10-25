#pragma once

#include "CoreMinimal.h"
#include "EStoreCharactersMenuState.h"
#include "StoreCharactersMenuTabSelectedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStoreCharactersMenuTabSelectedDelegate, EStoreCharactersMenuState, menuState, bool, alreadySelected);
