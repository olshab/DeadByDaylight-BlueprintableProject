#pragma once

#include "CoreMinimal.h"
#include "HeritagePackSeenDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHeritagePackSeenDelegate, const FString&, packId);
