#pragma once

#include "CoreMinimal.h"
#include "AkPropertyToControl.h"
#include "Types/SlateEnums.h"
#include "UObject/NoExportTypes.h"
#include "OnPropertyDropDetected.h"
#include "Components/Widget.h"
#include "Styling/SlateTypes.h"
#include "OnItemDropDetected.h"
#include "AkWwiseItemToControl.h"
#include "AkOnFloatValueChangedEvent.h"
#include "AkSlider.generated.h"

UCLASS(Blueprintable)
class AKAUDIO_API UAkSlider : public UWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Value;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGetFloat ValueDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSliderStyle WidgetStyle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EOrientation> Orientation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor SliderBarColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FLinearColor SliderHandleColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IndentHandle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool Locked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float StepSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsFocusable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAkPropertyToControl ThePropertyToControl;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAkWwiseItemToControl ItemToControl;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FAkOnFloatValueChangedEvent OnValueChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnItemDropDetected OnItemDropped;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnPropertyDropDetected OnPropertyDropped;

public:
	UFUNCTION(BlueprintCallable)
	void SetValue(float InValue);

	UFUNCTION(BlueprintCallable)
	void SetStepSize(float InValue);

	UFUNCTION(BlueprintCallable)
	void SetSliderHandleColor(FLinearColor InValue);

	UFUNCTION(BlueprintCallable)
	void SetSliderBarColor(FLinearColor InValue);

	UFUNCTION(BlueprintCallable)
	void SetLocked(bool InValue);

	UFUNCTION(BlueprintCallable)
	void SetIndentHandle(bool InValue);

	UFUNCTION(BlueprintCallable)
	void SetAkSliderItemProperty(const FString& ItemProperty);

	UFUNCTION(BlueprintCallable)
	void SetAkSliderItemId(const FGuid& ItemId);

	UFUNCTION(BlueprintPure)
	float GetValue() const;

	UFUNCTION(BlueprintPure)
	FString GetAkSliderItemProperty() const;

	UFUNCTION(BlueprintPure)
	FGuid GetAkSliderItemId() const;

public:
	UAkSlider();
};

FORCEINLINE uint32 GetTypeHash(const UAkSlider) { return 0; }
