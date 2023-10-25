#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UMGTallyRankBanner.generated.h"

class UUMGTallyPipsContainer;
class UImage;
class UUMGRankBanner;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGTallyRankBanner : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGTallyPipsContainer* PipsContainerWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGRankBanner* RankBanner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* SmokeBackground;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetAsLocked(bool locked);

public:
	UUMGTallyRankBanner();
};

FORCEINLINE uint32 GetTypeHash(const UUMGTallyRankBanner) { return 0; }
