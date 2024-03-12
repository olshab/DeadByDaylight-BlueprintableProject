#pragma once

#include "CoreMinimal.h"
#include "ChapterPackSeenDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChapterPackSeenDelegate, const FString&, packId);
