#pragma once

#include "CoreMinimal.h"
#include "CoreBaseViewInterface.h"
#include "EControlMode.h"
#include "EScaleType.h"
#include "InteractiveWidgetInterface.h"
#include "Blueprint/UserWidget.h"
#include "CoreBaseUserWidget.generated.h"

class UWidgetAnimation;
class UDBDInputManager;
class UScaleBox;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UCoreBaseUserWidget : public UUserWidget, public ICoreBaseViewInterface, public IInteractiveWidgetInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UScaleBox* ScaleContainer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsInteractive;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EControlMode _controlMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EScaleType ScaleType;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UDBDInputManager* _inputManager;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<FName, UWidgetAnimation*> _animationMap;

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void UpdateScale(float scale);

protected:
	UFUNCTION(BlueprintCallable)
	bool StopAnimationByName(FName animName);

public:
	UFUNCTION(BlueprintCallable)
	void RegisterForInput();

protected:
	UFUNCTION(BlueprintCallable)
	bool PlayAnimationByName(FName animName, float starttime, int32 loopcount, TEnumAsByte<EUMGSequencePlayMode::Type> playMode, float playbackspeed);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnControlModeChangedBP(EControlMode controlMode);

	UFUNCTION(BlueprintPure)
	UWidgetAnimation* GetAnimationByName(FName animName) const;

public:
	UFUNCTION(BlueprintCallable)
	void DeregisterFromInput();

public:
	UCoreBaseUserWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreBaseUserWidget) { return 0; }
