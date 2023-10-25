#pragma once

#include "CoreMinimal.h"
#include "UMGLoadoutItemButton.h"
#include "StatusEffectSlotData.h"
#include "UMGStatusEffectIcon.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGStatusEffectIcon : public UUMGLoadoutItemButton
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FStatusEffectSlotData StatusEffectData;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void UpdateWidget();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void UpdatePercentageFill(float percentage);

public:
	UUMGStatusEffectIcon();
};

FORCEINLINE uint32 GetTypeHash(const UUMGStatusEffectIcon) { return 0; }
