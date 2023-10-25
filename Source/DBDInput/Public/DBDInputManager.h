#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "DBDInputManager.generated.h"

class UControlModeManager;
class UVirtualKeyboardManager;
class UUserWidget;
class USwitchDockStateManager;
class UDataTable;

UCLASS(Blueprintable)
class DBDINPUT_API UDBDInputManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UControlModeManager* _controlModeManager;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	USwitchDockStateManager* _switchDockStateManager;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UVirtualKeyboardManager* _virtualKeyboardManager;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UDataTable* _analogCursorDb;

public:
	UFUNCTION(BlueprintCallable)
	void RemovePresenterRootWidget(const UUserWidget* presenterRootWidget);

	UFUNCTION(BlueprintCallable)
	void AddPresenterRootWidget(UUserWidget* presenterRootWidget);

public:
	UDBDInputManager();
};

FORCEINLINE uint32 GetTypeHash(const UDBDInputManager) { return 0; }
