#pragma once

#include "CoreMinimal.h"
#include "HoudiniAssetParameter.h"
#include "HoudiniAssetParameterFolderList.generated.h"

UCLASS(Blueprintable)
class UHoudiniAssetParameterFolderList : public UHoudiniAssetParameter
{
	GENERATED_BODY()

public:
	UHoudiniAssetParameterFolderList();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniAssetParameterFolderList) { return 0; }
