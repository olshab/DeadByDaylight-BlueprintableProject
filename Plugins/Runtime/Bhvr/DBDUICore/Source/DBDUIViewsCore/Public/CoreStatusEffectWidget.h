#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "StatusEffectViewInterface.h"
#include "CoreBaseHudWidget.h"
#include "CoreStatusEffectWidget.generated.h"

class UCoreStatusEffectIcon;
class UGridPanel;

UCLASS(Blueprintable, EditInlineNew)
class UCoreStatusEffectWidget : public UCoreBaseHudWidget, public IStatusEffectViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	int32 InactiveThreshold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	int32 PrepooledItemAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	int32 ItemsByColumn;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	float EvenColumnOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSubclassOf<UCoreStatusEffectIcon> CoreStatusEffectIconClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UGridPanel* StatusEffectContainer;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TArray<UCoreStatusEffectIcon*> _statusEffectPool;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TArray<FName> _statusEffectOrder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TMap<FName, UCoreStatusEffectIcon*> _statusEffectMap;

protected:
	UFUNCTION(BlueprintPure)
	TMap<FName, UCoreStatusEffectIcon*> GetStatusEffectMap() const;

public:
	UCoreStatusEffectWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreStatusEffectWidget) { return 0; }
