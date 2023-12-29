#pragma once

#include "CoreMinimal.h"
#include "HudPresenter.h"
#include "Templates/SubclassOf.h"
#include "EventObjectiveItemPresenter.generated.h"

class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class UEventObjectiveItemPresenter : public UHudPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> DefaultCoreHudEventObjectiveItemWidgetClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, TSubclassOf<UUserWidget>> CoreHudEventObjectiveItemWidgetClassMapping;

public:
	UEventObjectiveItemPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UEventObjectiveItemPresenter) { return 0; }
