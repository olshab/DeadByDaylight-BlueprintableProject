#pragma once

#include "CoreMinimal.h"
#include "PackBuyClickedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPackBuyClickedDelegate, const FString&, packId);
