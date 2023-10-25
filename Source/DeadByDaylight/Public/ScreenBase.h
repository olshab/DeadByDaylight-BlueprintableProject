#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ScreenBase.generated.h"

class UGFxObject;
class UScreenController;

UCLASS(Blueprintable, Abstract)
class UScreenBase : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsAnimationDone;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UGFxObject* ScreenObject;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	UScreenController* _screenController;

public:
	UFUNCTION(BlueprintCallable)
	void SetFadesOut(bool fadesOut) const;

	UFUNCTION(BlueprintCallable)
	void OnTextInputMouseClicked(bool isPassword);

	UFUNCTION(BlueprintCallable)
	void OnStart();

	UFUNCTION(BlueprintCallable)
	void OnNavKey(const FString& navKey);

	UFUNCTION(BlueprintCallable)
	void OnHideVirtualKeyboardRequested();

	UFUNCTION(BlueprintCallable)
	void OnEscape();

	UFUNCTION(BlueprintCallable)
	void OnBack();

	UFUNCTION(BlueprintCallable)
	void OnAnyKey(float code);

	UFUNCTION(BlueprintCallable)
	void OnAnimationUpdate(int32 isAnimationDoneNew);

	UFUNCTION(BlueprintCallable)
	void BroadcastOnHighlightedElementClickedEvent(const FName onBoardingID);

public:
	UScreenBase();
};

FORCEINLINE uint32 GetTypeHash(const UScreenBase) { return 0; }
