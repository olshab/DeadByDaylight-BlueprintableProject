#pragma once

#include "CoreMinimal.h"
#include "CharacterClickedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCharacterClickedDelegate, const FString&, packId, const int32, characterIndex);
