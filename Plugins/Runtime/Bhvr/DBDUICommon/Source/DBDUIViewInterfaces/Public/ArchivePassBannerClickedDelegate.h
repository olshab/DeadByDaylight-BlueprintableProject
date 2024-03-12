#pragma once

#include "CoreMinimal.h"
#include "ArchivePassBannerClickedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FArchivePassBannerClickedDelegate, const FName&, archiveId);
