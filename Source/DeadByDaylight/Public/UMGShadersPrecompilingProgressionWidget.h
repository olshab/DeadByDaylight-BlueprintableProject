#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGShadersPrecompilingProgressionWidget.generated.h"

class UProgressBar;
class UTextBlock;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGShadersPrecompilingProgressionWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UProgressBar* _progressBar;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* _progressionText;

public:
	UUMGShadersPrecompilingProgressionWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGShadersPrecompilingProgressionWidget) { return 0; }
