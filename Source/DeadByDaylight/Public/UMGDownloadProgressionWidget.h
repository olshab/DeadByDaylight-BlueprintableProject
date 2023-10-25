#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "DownloadProgression.h"
#include "UMGDownloadProgressionWidget.generated.h"

class UProgressBar;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UUMGDownloadProgressionWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UProgressBar* ProgressBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* DownloadPercentage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* DownloadDescription;

public:
	UFUNCTION(BlueprintCallable)
	void UpdateProgression(const FDownloadProgression& downloadProgression);

public:
	UUMGDownloadProgressionWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGDownloadProgressionWidget) { return 0; }
