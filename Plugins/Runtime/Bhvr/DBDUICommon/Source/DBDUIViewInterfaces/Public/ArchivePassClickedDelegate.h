#pragma once

#include "CoreMinimal.h"
#include "ArchivePassClickedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FArchivePassClickedDelegate, const FString&, packId, const FName&, archiveId);
