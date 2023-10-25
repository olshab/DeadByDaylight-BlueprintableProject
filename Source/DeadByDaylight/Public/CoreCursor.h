#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CoreCursor.generated.h"

class UScaleBox;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UCoreCursor : public UUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UScaleBox* CursorScaleBox;

public:
	UCoreCursor();
};

FORCEINLINE uint32 GetTypeHash(const UCoreCursor) { return 0; }
