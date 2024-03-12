#pragma once

#include "CoreMinimal.h"
#include "SpecialPackClickedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSpecialPackClickedDelegate, const FString&, packId);
