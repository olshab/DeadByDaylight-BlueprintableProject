#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RootMovie.generated.h"

class UScreenController;
class UGFxMoviePlayer;
class UDBDInputManager;
class UGameInstance;
class UUIController;
class UGFxObject;

UCLASS(Blueprintable)
class DEADBYDAYLIGHT_API URootMovie : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString SwfAssetName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UGFxMoviePlayer* SwfMoviePlayer;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UScreenController* m_ScreenController;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UUIController* m_UIController;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UGameInstance* m_GameInstance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	UDBDInputManager* _inputManager;

public:
	UFUNCTION(BlueprintCallable)
	void SetCursorAsSticky(bool isSticky, bool lockVertical, bool lockHorizontal, float stickinessOverride);

	UFUNCTION(BlueprintCallable)
	void RemoveCursorBlockingWidget(const FString& id);

	UFUNCTION(BlueprintCallable)
	void RegisterView(const FString& screenId, UGFxObject* screenObject);

	UFUNCTION(BlueprintCallable)
	void RegisterUIControl(UGFxObject* flashObj);

	UFUNCTION(BlueprintCallable)
	void RegisterScreenControl(UGFxObject* flashObj);

	UFUNCTION(BlueprintCallable)
	void PlaySound(const FString& soundId);

	UFUNCTION(BlueprintCallable)
	void OpenLinkInBrowser(const FString& linkAddress);

	UFUNCTION(BlueprintCallable)
	void OnScreenReady(const FString& screenId);

	UFUNCTION(BlueprintCallable)
	void OnScreenLeave(const FString& screenId);

	UFUNCTION(BlueprintCallable)
	void OnScreenEnter(const FString& screenId);

	UFUNCTION(BlueprintCallable)
	void OnMovieClosed();

	UFUNCTION(BlueprintCallable)
	void OnFlashReady();

	UFUNCTION(BlueprintCallable)
	void OnAssert(int32 type, const FString& message);

	UFUNCTION(BlueprintCallable)
	void AddCursorBlockingWidget(const FString& id, float x, float y, float width, float height);

public:
	URootMovie();
};

FORCEINLINE uint32 GetTypeHash(const URootMovie) { return 0; }
