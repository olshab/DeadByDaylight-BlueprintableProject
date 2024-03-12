#pragma once

#include "CoreMinimal.h"
#include "FeaturedChapterPackClickedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFeaturedChapterPackClickedDelegate, const FString&, chapterPackId);
