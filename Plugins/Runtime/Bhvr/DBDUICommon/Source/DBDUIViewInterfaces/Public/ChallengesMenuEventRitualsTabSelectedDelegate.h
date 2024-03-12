#pragma once

#include "CoreMinimal.h"
#include "EChallengesMenuEventRitualsState.h"
#include "ChallengesMenuEventRitualsTabSelectedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChallengesMenuEventRitualsTabSelectedDelegate, const EChallengesMenuEventRitualsState, eventRitualsState);
