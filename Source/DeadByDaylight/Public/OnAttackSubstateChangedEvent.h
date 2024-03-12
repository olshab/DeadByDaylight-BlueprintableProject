#pragma once

#include "CoreMinimal.h"
#include "EAttackSubstate.h"
#include "OnAttackSubstateChangedEvent.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAttackSubstateChangedEvent, EAttackSubstate, substate);
