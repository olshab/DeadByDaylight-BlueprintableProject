#pragma once

#include "CoreMinimal.h"
#include "UMGDragWidget.h"
#include "UMGHudEditorLayoutWidget.generated.h"

class UCustomWidgetWrapper_HudEditor;
class UUMGHudEditorScreen;
class UAkAudioEvent;
class UUMGDragWidget_HudEditor;
class UUMGHudEditorLayoutScreen;

UCLASS(Blueprintable, EditInlineNew)
class DEADBYDAYLIGHT_API UUMGHudEditorLayoutWidget : public UUMGDragWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UUMGHudEditorScreen* HudEditorScreen;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UAkAudioEvent* _onSaveOverlapSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UUMGDragWidget_HudEditor* _currentWidgetToEdit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	TMap<UUMGHudEditorLayoutScreen*, bool> _isSaveDirtyMap;

public:
	UFUNCTION(BlueprintCallable)
	void ShowSurvivorLayout();

	UFUNCTION(BlueprintCallable)
	void ShowKillerLayout();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetWidgetToEdit(UUMGDragWidget_HudEditor* widget);

	UFUNCTION(BlueprintCallable)
	void SetSaveOverlapSound(UAkAudioEvent* onSaveOverlapSound);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetHudEditorScreen(UUMGHudEditorScreen* hudEditorScreenNew);

	UFUNCTION(BlueprintCallable)
	void SaveLayout();

	UFUNCTION(BlueprintCallable)
	void ResetLayout();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void OnSaveDirty(bool isDirty);

	UFUNCTION(BlueprintPure)
	UCustomWidgetWrapper_HudEditor* GetHudEditorWrapperToEdit() const;

	UFUNCTION(BlueprintPure)
	UUMGDragWidget_HudEditor* GetCurrentDragWidget() const;

	UFUNCTION(BlueprintCallable)
	void FlipLayout();

	UFUNCTION(BlueprintCallable)
	void FlagSaveAsDirty();

public:
	UUMGHudEditorLayoutWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGHudEditorLayoutWidget) { return 0; }
