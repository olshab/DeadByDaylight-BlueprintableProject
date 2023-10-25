#pragma once

#include "CoreMinimal.h"
#include "EContext.h"
#include "Presenter.h"
#include "Components/CanvasPanelSlot.h"
#include "Templates/SubclassOf.h"
#include "DisplayStandPresenter.generated.h"

class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIPRESENTERS_API UDisplayStandPresenter : public UPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> CoreDisplayStandWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EContext ObservedContext;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName DisplayStandName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAnchorData DragZoneLayoutData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DragZonePositionX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DragZonePositionY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DragZoneSizeX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DragZoneSizeY;

public:
	UFUNCTION(BlueprintCallable)
	void OnDisplayStandRotation(float distance);

private:
	UFUNCTION(BlueprintCallable)
	bool IsContextEntered() const;

public:
	UDisplayStandPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UDisplayStandPresenter) { return 0; }
