#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "UMGLacerationStatusEffectUI.generated.h"

class UTexture2D;
class UImage;
class UMaterialInstanceDynamic;
class UPaperSprite;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGLacerationStatusEffectUI : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* LacerationDecoration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* LacerationFill;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int32> _maximumLacerationDefinitions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UPaperSprite*> _lacerationDecorationImages;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<UTexture2D*> _lacerationFillImages;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor _lacerationDefaultColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor _lacerationFillFullColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName _glassShatterDisintigrateAnimationName;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UMaterialInstanceDynamic* _lacerationFillFullMI;

private:
	UFUNCTION(BlueprintCallable)
	void OnFinishedBoomAnimation();

public:
	UUMGLacerationStatusEffectUI();
};

FORCEINLINE uint32 GetTypeHash(const UUMGLacerationStatusEffectUI) { return 0; }
