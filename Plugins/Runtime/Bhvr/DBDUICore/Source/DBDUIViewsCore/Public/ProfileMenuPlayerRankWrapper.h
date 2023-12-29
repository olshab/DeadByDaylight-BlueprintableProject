#pragma once

#include "CoreMinimal.h"
#include "CoreBaseUserWidget.h"
#include "RankViewData.h"
#include "ProfileMenuPlayerRankWrapper.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UProfileMenuPlayerRankWrapper : public UCoreBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText ProgressText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText KillerGradeText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText SurvivorGradeText;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetData(const FRankViewData& data);

public:
	UProfileMenuPlayerRankWrapper();
};

FORCEINLINE uint32 GetTypeHash(const UProfileMenuPlayerRankWrapper) { return 0; }
