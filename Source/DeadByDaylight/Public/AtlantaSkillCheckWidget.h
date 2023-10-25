#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "AtlantaSkillCheckWidget.generated.h"

class UCanvasPanel;
class UImage;

UCLASS(Blueprintable, EditInlineNew)
class DEADBYDAYLIGHT_API UAtlantaSkillCheckWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCanvasPanel* SkillCheckArea;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UImage* HitArea;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UImage* Hit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UImage* OrangeSmoke;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UImage* BonusArea;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UImage* StartMarker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UImage* EndMarker;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCanvasPanel* HitAreaContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCanvasPanel* BonusAreaContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCanvasPanel* HitAreaStartMarkerContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCanvasPanel* HitAreaEndMarkerContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UCanvasPanel* MarkerContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor HexColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor DefaultColor;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isPlayAnimation;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float PathCoveredAngle;

public:
	UFUNCTION(BlueprintCallable)
	void SetHexed(bool isHexed);

	UFUNCTION(BlueprintCallable)
	void SetActive(bool active);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnIsActiveChanged(bool isActive);

	UFUNCTION(BlueprintPure)
	bool IsActive() const;

public:
	UAtlantaSkillCheckWidget();
};

FORCEINLINE uint32 GetTypeHash(const UAtlantaSkillCheckWidget) { return 0; }
