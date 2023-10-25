#pragma once

#include "CoreMinimal.h"
#include "EItemRarity.h"
#include "Blueprint/UserWidget.h"
#include "UObject/SoftObjectPtr.h"
#include "CoreBaseLoadoutPartWidget.generated.h"

class UDBDImage;
class UTextBlock;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class DBDUIVIEWSCORE_API UCoreBaseLoadoutPartWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDImage* ImageRarity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UDBDImage* ImageIcon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UTextBlock* TextStackCount;

protected:
	UFUNCTION(BlueprintCallable)
	void SetLoadoutStackCount(int32 stackCount);

	UFUNCTION(BlueprintCallable)
	void SetLoadoutPartRarity(EItemRarity rarity);

	UFUNCTION(BlueprintCallable)
	void SetLoadoutPartIcon(TSoftObjectPtr<UTexture2D> icon);

public:
	UCoreBaseLoadoutPartWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreBaseLoadoutPartWidget) { return 0; }
