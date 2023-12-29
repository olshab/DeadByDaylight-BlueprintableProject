#pragma once

#include "CoreMinimal.h"
#include "CoreButtonWidget.h"
#include "EItemFilterOption.h"
#include "CoreFilterButtonWidget.generated.h"

class UDBDImage;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreFilterButtonWidget : public UCoreButtonWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDImage* LabelIMG;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EItemFilterOption _filterOption;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _isToggled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* FavoriteTagTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* OwnedTagTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool _defaultToggleState;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void UpdateVisualState();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetupTextOnly(const FText& label);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetupImageOnly(UTexture2D* texture);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void SetupImageAndText(UTexture2D* texture, const FText& label);

	UFUNCTION(BlueprintCallable)
	void SetToggledState(bool isToggled);

	UFUNCTION(BlueprintPure)
	bool IsToggled() const;

public:
	UCoreFilterButtonWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreFilterButtonWidget) { return 0; }
