#pragma once

#include "CoreMinimal.h"
#include "EStoreItemUnlockType.generated.h"

UENUM(BlueprintType)
enum class EStoreItemUnlockType : uint8
{
	None,
	Tutorial,
	Store,
	Event,
	ChapterPack,
	HeritagePack,
	SpecialPack,
};
