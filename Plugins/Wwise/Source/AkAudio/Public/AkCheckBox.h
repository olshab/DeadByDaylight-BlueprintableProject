#pragma once

#include "CoreMinimal.h"
#include "Components/ContentWidget.h"
#include "Styling/SlateTypes.h"
#include "OnBoolPropertyDropDetected.h"
#include "Components/Widget.h"
#include "Types/SlateEnums.h"
#include "AkBoolPropertyToControl.h"
#include "AkWwiseItemToControl.h"
#include "AkOnCheckBoxComponentStateChanged.h"
#include "OnWwiseItemDropDetected.h"
#include "UObject/NoExportTypes.h"
#include "AkCheckBox.generated.h"

UCLASS(Blueprintable)
class AKAUDIO_API UAkCheckBox : public UContentWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ECheckBoxState CheckedState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGetCheckBoxState CheckedStateDelegate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCheckBoxStyle WidgetStyle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsFocusable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAkBoolPropertyToControl ThePropertyToControl;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAkWwiseItemToControl ItemToControl;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FAkOnCheckBoxComponentStateChanged AkOnCheckStateChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnWwiseItemDropDetected OnItemDropped;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnBoolPropertyDropDetected OnPropertyDropped;

public:
	UFUNCTION(BlueprintCallable)
	void SetIsChecked(bool InIsChecked);

	UFUNCTION(BlueprintCallable)
	void SetCheckedState(ECheckBoxState InCheckedState);

	UFUNCTION(BlueprintCallable)
	void SetAkItemId(const FGuid& ItemId);

	UFUNCTION(BlueprintCallable)
	void SetAkBoolProperty(const FString& ItemProperty);

	UFUNCTION(BlueprintPure)
	bool IsPressed() const;

	UFUNCTION(BlueprintPure)
	bool IsChecked() const;

	UFUNCTION(BlueprintPure)
	ECheckBoxState GetCheckedState() const;

	UFUNCTION(BlueprintPure)
	FString GetAkProperty() const;

	UFUNCTION(BlueprintPure)
	FGuid GetAkItemId() const;

public:
	UAkCheckBox();
};

FORCEINLINE uint32 GetTypeHash(const UAkCheckBox) { return 0; }
