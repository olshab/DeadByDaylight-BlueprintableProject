#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "VirtualKeyboardManager.generated.h"

class UVirtualKeyboard;

UCLASS(Blueprintable)
class DBDINPUT_API UVirtualKeyboardManager : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UVirtualKeyboard* _virtualKeyboard;

public:
	UVirtualKeyboardManager();
};

FORCEINLINE uint32 GetTypeHash(const UVirtualKeyboardManager) { return 0; }
