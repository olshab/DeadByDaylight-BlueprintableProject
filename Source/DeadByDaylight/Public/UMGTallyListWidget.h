#pragma once

#include "CoreMinimal.h"
#include "ETallyListPageID.h"
#include "UMGPageScrollWidget.h"
#include "EPlayerRole.h"
#include "UMGTallyListWidget.generated.h"

class UCanvasPanel;
class UUMGTallyListElementWidget;

UCLASS(Blueprintable, EditInlineNew)
class UUMGTallyListWidget : public UUMGPageScrollWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText TopLeftText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText TopRightText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* ListBGPanel;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	EPlayerRole _playerRole;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TSet<int32> _inAnimationPlayedPages;

	UPROPERTY(EditAnywhere, Transient, Export)
	TMap<ETallyListPageID, UUMGTallyListElementWidget*> _listItemWidgets;

public:
	UUMGTallyListWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGTallyListWidget) { return 0; }
