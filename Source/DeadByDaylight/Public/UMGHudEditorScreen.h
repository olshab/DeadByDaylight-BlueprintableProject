#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "EPlayerRole.h"
#include "UMGHudEditorScreen.generated.h"

class UAkAudioEvent;
class UUMGHudEditorLayoutScreen;
class UUMGHudEditorVersionWidget;
class UUMGHudEditorLayoutWidget;

UCLASS(Blueprintable, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGHudEditorScreen : public UUserWidget
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UUMGHudEditorLayoutWidget* _hudEditorLayoutWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UUMGHudEditorVersionWidget* _versionSwapWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	TMap<EPlayerRole, UUMGHudEditorLayoutScreen*> _storedLayoutScreens;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UUMGHudEditorLayoutScreen* _currentLayoutScreen;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UAkAudioEvent* _onDropOverlapSound;

public:
	UFUNCTION(BlueprintCallable)
	void ShowHudLayout(EPlayerRole role);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetWidgets(UUMGHudEditorLayoutWidget* hudEditorLayoutWidget, UUMGHudEditorVersionWidget* versionSwapWidget);

	UFUNCTION(BlueprintCallable)
	void SetEditorDropErrorOverlapSound(UAkAudioEvent* onDropOverlapSound);

	UFUNCTION(BlueprintCallable)
	void RegisterEditorLayoutScreen(EPlayerRole role, UUMGHudEditorLayoutScreen* screen);

	UFUNCTION(BlueprintCallable)
	void Quit();

	UFUNCTION(BlueprintPure)
	UUMGHudEditorVersionWidget* GetVersionSwapWidget() const;

public:
	UUMGHudEditorScreen();
};

FORCEINLINE uint32 GetTypeHash(const UUMGHudEditorScreen) { return 0; }
