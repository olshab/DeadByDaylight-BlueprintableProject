#pragma once

#include "CoreMinimal.h"
#include "CustomWidgetWrapper.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "HudEditorDragFromParentAxisLimit.h"
#include "CustomWidgetWrapper_HudEditor.generated.h"

class UWidget;
class UCustomWidgetWrapper_HudEditor;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API UCustomWidgetWrapper_HudEditor : public UCustomWidgetWrapper
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinOpacity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxOpacity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MinScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NbVersions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HideUnderOpacity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FColor HiddenStatusTintColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float HiddenStatusOpacity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float OverlapAboveSizeRatio;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTagContainer IgnoreOverlapIds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FHudEditorDragFromParentAxisLimit ParentDragLimitX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FHudEditorDragFromParentAxisLimit ParentDragLimitY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsEditingHudByInput;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FColor OverlapStatusTintColor;

public:
	UFUNCTION(BlueprintPure)
	float GetScale() const;

	UFUNCTION(BlueprintPure)
	float GetOpacity() const;

	UFUNCTION(BlueprintCallable)
	void FlipScreenPosition();

	UFUNCTION(BlueprintCallable)
	void FlipPositionWithChildLinkWidget();

	UFUNCTION(BlueprintCallable)
	void ClampToViewport();

	UFUNCTION(BlueprintPure)
	bool CanEditScale() const;

	UFUNCTION(BlueprintPure)
	bool CanEditOpacity() const;

	UFUNCTION(BlueprintCallable)
	void ApplyScaleWithOverlappingWrappers(float scale, UWidget* widget, const TArray<UCustomWidgetWrapper_HudEditor*>& allEditableWrappers, bool needDetectOverlapping);

	UFUNCTION(BlueprintCallable)
	void AddToTranslation(FVector2D translation);

public:
	UCustomWidgetWrapper_HudEditor();
};

FORCEINLINE uint32 GetTypeHash(const UCustomWidgetWrapper_HudEditor) { return 0; }
