#pragma once

#include "CoreMinimal.h"
#include "OnFeaturedCharacterClickedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFeaturedCharacterClickedDelegate, int32, characterIndex);
