#pragma once

#include "CoreMinimal.h"
#include "CollectionClickedDelegate.generated.h"

class UStoreCollectionViewData;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCollectionClickedDelegate, const UStoreCollectionViewData*, collection);
