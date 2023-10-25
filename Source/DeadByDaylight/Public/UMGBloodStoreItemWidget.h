#pragma once

#include "CoreMinimal.h"
#include "MobileBaseUserWidget.h"
#include "UObject/NoExportTypes.h"
#include "EBloodwebNodeContentType.h"
#include "UMGBloodStoreItemWidget.generated.h"

class UImage;
class UCanvasPanel;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGBloodStoreItemWidget : public UMobileBaseUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* NodeImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* BackgroundImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* RarityBackground;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* ItemPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* MysteryBoxPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UImage* MysteryBoxRarityBackground;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* CollectedPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UCanvasPanel* ConsumedPanel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EBloodwebNodeContentType _contentType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isMysteryBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D _bigItemScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D _normalItemScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float _consumedOpacity;

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void UnFocusNode();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetSelectedVisibilities(bool isSelected);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetBackgroundImages();

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void PlayConsumedAnimation(const bool skipIntro);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void FocusNode();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void ConsumeNode();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void CollectNode();

private:
	UFUNCTION(BlueprintCallable)
	void BroadcastBloodNodeSelected();

public:
	UUMGBloodStoreItemWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGBloodStoreItemWidget) { return 0; }
