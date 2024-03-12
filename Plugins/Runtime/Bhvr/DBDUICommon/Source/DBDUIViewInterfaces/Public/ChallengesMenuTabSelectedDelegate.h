#pragma once

#include "CoreMinimal.h"
#include "EChallengesMenuState.h"
#include "ChallengesMenuTabSelectedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChallengesMenuTabSelectedDelegate, const EChallengesMenuState, menuState);
