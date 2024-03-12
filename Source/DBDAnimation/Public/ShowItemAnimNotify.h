#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ShowItemAnimNotify.generated.h"

UCLASS(Blueprintable)
class DBDANIMATION_API UShowItemAnimNotify : public UAnimNotify
{
	GENERATED_BODY()

public:
	UShowItemAnimNotify();
};

FORCEINLINE uint32 GetTypeHash(const UShowItemAnimNotify) { return 0; }
