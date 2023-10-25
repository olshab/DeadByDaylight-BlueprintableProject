#pragma once

#include "CoreMinimal.h"
#include "UIComponent.h"
#include "EPresenterPhase.h"
#include "PresenterGroup.generated.h"

class UPresenter;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class DBDUIPRESENTERS_API UPresenterGroup : public UUIComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EPresenterPhase WidgetInstantiationPhase;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<UUIComponent*> _components;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	TArray<UPresenter*> _presenters;

public:
	UPresenterGroup();
};

FORCEINLINE uint32 GetTypeHash(const UPresenterGroup) { return 0; }
