#pragma once

#include "CoreMinimal.h"
#include "EAttackSubstate.h"
#include "OnAttackSubstateChangedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FOnAttackSubstateChangedDelegate, EAttackSubstate, substate);
