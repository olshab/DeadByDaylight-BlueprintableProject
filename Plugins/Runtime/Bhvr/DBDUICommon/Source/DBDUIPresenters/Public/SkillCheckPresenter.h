#pragma once

#include "CoreMinimal.h"
#include "HudPresenter.h"
#include "Templates/SubclassOf.h"
#include "SkillCheckPresenter.generated.h"

class UUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIPRESENTERS_API USkillCheckPresenter : public UHudPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UUserWidget> SkillCheckWidgetClass;

public:
	USkillCheckPresenter();
};

FORCEINLINE uint32 GetTypeHash(const USkillCheckPresenter) { return 0; }
