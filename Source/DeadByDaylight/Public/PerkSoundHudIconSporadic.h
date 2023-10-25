#pragma once

#include "CoreMinimal.h"
#include "Layout/Geometry.h"
#include "PerkSoundHudIcon.h"
#include "PerkSoundHudIconSporadic.generated.h"

class UCanvasPanel;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UPerkSoundHudIconSporadic : public UPerkSoundHudIcon
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* SporadicIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FadeInRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FadeOutRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AnimationStartOpacity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 FadePolynomialOrder;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool DisplayIcon;

public:
	UFUNCTION()
	void NativeTick(const FGeometry& MyGeometry, float DeltaTime);

public:
	UPerkSoundHudIconSporadic();
};

FORCEINLINE uint32 GetTypeHash(const UPerkSoundHudIconSporadic) { return 0; }
