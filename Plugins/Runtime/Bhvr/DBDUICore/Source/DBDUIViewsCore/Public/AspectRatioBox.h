#pragma once

#include "CoreMinimal.h"
#include "Components/ContentWidget.h"
#include "AspectRatioBox.generated.h"

UCLASS(Blueprintable)
class DBDUIVIEWSCORE_API UAspectRatioBox : public UContentWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AspectRatio;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 IsAspectRatioOverridden : 1;

public:
	UFUNCTION(BlueprintCallable)
	void SetAspectRatio(float inAspectRatio);

	UFUNCTION(BlueprintCallable)
	void ClearAspectRatio();

public:
	UAspectRatioBox();
};

FORCEINLINE uint32 GetTypeHash(const UAspectRatioBox) { return 0; }
