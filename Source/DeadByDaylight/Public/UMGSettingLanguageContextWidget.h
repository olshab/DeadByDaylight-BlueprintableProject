#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "UMGSettingContextWidget.h"
#include "UMGSettingLanguageContextWidget.generated.h"

class UUMGSettingContextButton;
class UScrollBox;

UCLASS(Blueprintable, Abstract, EditInlineNew)
class UUMGSettingLanguageContextWidget : public UUMGSettingContextWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidget))
	UScrollBox* LanguageScrollBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, NoClear)
	TSoftClassPtr<UUMGSettingContextButton> _languageButtonClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 _languageListRowGap;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Export, meta=(AllowPrivateAccess=true))
	UUMGSettingContextButton* _selectedLanguageButton;

public:
	UUMGSettingLanguageContextWidget();
};

FORCEINLINE uint32 GetTypeHash(const UUMGSettingLanguageContextWidget) { return 0; }
