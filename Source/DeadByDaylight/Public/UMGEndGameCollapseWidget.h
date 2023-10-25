#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGEndGameCollapseWidget.generated.h"

class UCanvasPanel;
class UUMGEndGameCollapseProgressWidget;

UCLASS(Blueprintable, EditInlineNew)
class UUMGEndGameCollapseWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _progressBarInterpSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _slowMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* NormalBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* SlowBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGEndGameCollapseProgressWidget* NormalProgressBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGEndGameCollapseProgressWidget* SlowProgressBar;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UUMGEndGameCollapseProgressWidget* _topBar;

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void PlayToZeroAnimation();

public:
	UUMGEndGameCollapseWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGEndGameCollapseWidget) { return 0; }
