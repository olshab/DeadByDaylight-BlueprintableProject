#pragma once

#include "CoreMinimal.h"
#include "UMGBaseButtonWidget.h"
#include "UMGAtlantaMatchConfigTab.generated.h"

class USizeBox;
class UTextBlock;
class UCanvasPanel;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGAtlantaMatchConfigTab : public UUMGBaseButtonWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	USizeBox* IconSizeBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* TabName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* RandomPanel;

public:
	UUMGAtlantaMatchConfigTab();
};

FORCEINLINE uint32 GetTypeHash(const UUMGAtlantaMatchConfigTab) { return 0; }
