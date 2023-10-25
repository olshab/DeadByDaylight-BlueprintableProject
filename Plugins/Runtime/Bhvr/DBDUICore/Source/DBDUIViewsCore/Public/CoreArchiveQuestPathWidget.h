#pragma once

#include "CoreMinimal.h"
#include "EArchivePathStatus.h"
#include "CoreButtonWidget.h"
#include "ArchiveMapPathViewData.h"
#include "CoreArchiveQuestPathWidget.generated.h"

class UOverlay;
class UDBDImage;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreArchiveQuestPathWidget : public UCoreButtonWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UOverlay* PathOverlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDImage* PathImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EArchivePathStatus _status;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FArchiveMapPathViewData _data;

public:
	UFUNCTION(BlueprintCallable)
	void UpdatePath(const FArchiveMapPathViewData& data);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetVisualState(const EArchivePathStatus& pathStatus);

public:
	UFUNCTION(BlueprintCallable)
	void Reset();

	UFUNCTION(BlueprintCallable)
	void InitPath(const FArchiveMapPathViewData& data);

public:
	UCoreArchiveQuestPathWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreArchiveQuestPathWidget) { return 0; }
