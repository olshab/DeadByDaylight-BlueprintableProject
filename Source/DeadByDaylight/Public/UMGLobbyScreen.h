#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "OnJoinedLobbyLeaved.h"
#include "OnSearchingLobbyCancelled.h"
#include "UMGLobbyScreen.generated.h"

class UUMGFogWidget;
class UUMGLobbyOfferingWidget;
class UWidgetSwitcher;
class UUMGLobbySearchingWidget;
class UUMGLobbyJoinedWidget;

UCLASS(Blueprintable, EditInlineNew)
class UUMGLobbyScreen : public UMobileBaseUserWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UUMGLobbySearchingWidget* LobbySearchingWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnJoinedLobbyLeaved OnJoinedLobbyLeaved;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, BlueprintAssignable)
	FOnSearchingLobbyCancelled OnSearchingLobbyCancelled;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UWidgetSwitcher* LobbySwitcher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGLobbyJoinedWidget* LobbyJoinedWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGLobbyOfferingWidget* OfferingWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UUMGFogWidget* FogWidget;

protected:
	UFUNCTION(BlueprintCallable)
	void HandleSearchingLobbyCancel();

	UFUNCTION(BlueprintCallable)
	void HandleJoinedLobbyLeave();

public:
	UUMGLobbyScreen();
};

FORCEINLINE uint32 GetTypeHash(const UUMGLobbyScreen) { return 0; }
