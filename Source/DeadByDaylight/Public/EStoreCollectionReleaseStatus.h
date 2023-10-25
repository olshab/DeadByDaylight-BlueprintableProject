#pragma once

#include "CoreMinimal.h"
#include "EStoreCollectionReleaseStatus.generated.h"

UENUM(BlueprintType)
enum class EStoreCollectionReleaseStatus : uint8
{
	None,
	Dev,
	Uat,
	Qa = 4,
	Ptb = 8,
	Cert = 16,
	Stage = 32,
	Live = 64,
};
