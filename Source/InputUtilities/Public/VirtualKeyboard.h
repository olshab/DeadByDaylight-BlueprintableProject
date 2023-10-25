#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "VirtualKeyboard.generated.h"

UCLASS(Blueprintable)
class INPUTUTILITIES_API UVirtualKeyboard : public UObject
{
	GENERATED_BODY()

public:
	UVirtualKeyboard();
};

FORCEINLINE uint32 GetTypeHash(const UVirtualKeyboard) { return 0; }
