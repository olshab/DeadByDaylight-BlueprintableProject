#pragma once

#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "MobileBaseUserWidget.h"
#include "EActionButtonState.h"
#include "ActionButton.generated.h"

class UImage;
class UButton;

UCLASS(Blueprintable, EditInlineNew)
class DEADBYDAYLIGHT_API UActionButton : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSlateBrush DefaultImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UImage* IconImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UImage* ToggleSmokeImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UButton* Button;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DefaultOpacity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float ToggledOpacity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DisabledOpacity;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FSlateBrush Normal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FSlateBrush Toggled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FSlateBrush Disabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	EActionButtonState _currentState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	EActionButtonState _previousState;

public:
	UFUNCTION(BlueprintCallable)
	void SetState(EActionButtonState state);

	UFUNCTION(BlueprintCallable)
	void SetSlateBrush(const FSlateBrush& InBrush);

protected:
	UFUNCTION(BlueprintCallable)
	void SetPreviousState();

public:
	UFUNCTION(BlueprintCallable)
	void SetIcon(FSlateBrush slateBrush);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void PlayBecameAvailableAnimation();

public:
	UActionButton();
};

FORCEINLINE uint32 GetTypeHash(const UActionButton) { return 0; }
